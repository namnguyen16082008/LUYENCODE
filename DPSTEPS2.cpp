#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,k,x;
string a[N];
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        nho=kq/10;
        a[i]=char(kq%10+48);
    }
    return (nho==0) ? a : '1'+a;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    a[1]="1";a[2]="2";
    for (ll i=3;i<=n;i++) a[i]="-1";
    for (ll i=1;i<=k;i++){
        cin>>x;
        a[x]="0";
	}
    if (a[1]=="0" && a[2]!="0"){
        a[2]="1";
        a[1]="0";
	}
    for (ll i=3;i<=n;i++)
        if (a[i]!="0")
            a[i]=cong(a[i-1],a[i-2]);
    cout<<a[n];
}

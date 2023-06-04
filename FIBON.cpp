#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])+nho-96;
        a[i]=char(kq%10+48);
        nho=kq/10;
    }
    if (nho==1) a='1'+a;
    return a;
}
const ll N=105;
ll n;
string a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[1]="1",a[2]="1";
    for (ll i=1;i<=n;i++){
        if (i>2) a[i]=cong(a[i-1],a[i-2]);
        cout<<a[i]<<" ";
    }
}

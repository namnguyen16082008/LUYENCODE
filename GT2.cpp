#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll t,n;
string a[N];
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        nho=kq/10;
        c[i]=char(kq%10+48);
    }
    return (nho==0) ? c : '1'+c;
}
string nhan1(string a, char b){
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=(int(a[i])-48)*(int(b)-48)+nho;
        nho=kq/10;
        c[i]=char(kq%10+48);
    }
    if (nho!=0) c=char(nho+48)+c;
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
string nhan2(string a, string b){
    string c="0";
    for (ll i=0;i<b.size();i++)
        c=cong(c+'0',nhan1(a,b[i]));
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
string Change(ll n){
    ostringstream d;
    d<<n;
    return d.str();
}
void Build(){
    a[0]="1";
    for (ll i=1;i<=N;i++)
        a[i]=nhan2(a[i-1],Change(i));
}
void Solve(){
    cin>>n;
    cout<<a[n]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
	cin>>t;
	while (t--) Solve();
}

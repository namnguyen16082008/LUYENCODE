#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string  cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])+nho-96;
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
    return (nho==0) ? c : char(nho+48)+c;
}
string nhan2(string a, string b){
    string c="0";
    for (ll i=0;i<b.size();i++)
        c=cong(c+'0',nhan1(a,b[i]));
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    string t="1",a;
    cin>>a>>n;
    for (ll i=1;i<=n;i++) t=nhan2(t,a);
    cout<<t;
}

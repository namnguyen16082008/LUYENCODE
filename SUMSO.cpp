#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s,n="",ans="0";
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])+nho-96;
        nho=kq/10;
        c[i]=char(kq%10+48);
    }
    c=char(nho+48)+c;
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]>='0' && s[i]<='9') n+=s[i];
        else{
            ans=cong(ans,n);
            n="";
        }
    if (n!="") ans=cong(ans,n);
    cout<<ans;
}

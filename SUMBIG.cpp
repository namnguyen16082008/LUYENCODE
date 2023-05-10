#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string a,b;
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        c[i]=char(kq%10+48);
        nho=kq/10;
    }
    c=char(nho+48)+c;
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    cout<<cong(a,b);
}

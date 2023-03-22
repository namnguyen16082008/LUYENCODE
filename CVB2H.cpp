#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string s;
void Solve(){
    ll n=0;
    cin>>s;
    for (ll i=0;i<s.size();i++)
        (s[i]=='0') ? n*=2 : n=n*2+1;
    string x="";
    while (n>0){
        ll o=n%16;
        (o<10) ? x=char(o+48)+x : x=char(o+55)+x;
        n/=16;
    }
    cout<<x<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll t,x,y,z,o;
void Solve(){
    cin>>s;
    x=0,y=0,z=0;
    for (ll i=0;i<s.size();i++){
        if (s[i]>='A' && s[i]<='Z') x=1;
        if (s[i]>='a' && s[i]<='z') y=1;
        if (s[i]>='0' && s[i]<='9') z=1;
    }
    if (x+y+z<=2) o=x+y+z;
    else o=5;
    ll u1=s.size(),u2=0;
    cout<<min(u2+5,max(u1-5,u2))+o<<" ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

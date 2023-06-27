#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s1,s2,x="",y="";
ll Dx(string s){
    for (ll i=0;i<s.size()/2;i++)
        if (s[i]!=s[s.size()-i-1]) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s1>>s2;
    for (ll i=0;i<s1.size();i++){
        x=s1[i]+x;
        if (Dx(s1+x)) break;
    }
    for (ll i=0;i<s2.size();i++){
        y=s2[i]+y;
        if (Dx(s2+y)) break;
    }
    if (x.size()<y.size()) cout<<x;
    else if (x.size()>y.size()) cout<<y;
    else if (x!=y) cout<<min(x,y);
    else cout<<"No Caption";
}

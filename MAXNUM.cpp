#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s,ans="",n="";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    s+='?';
    for (ll i=0;i<s.size();i++)
        if (s[i]>='0' && s[i]<='9') n+=s[i];
        else{
            if (ans.size()<n.size() || (ans.size()==n.size() && ans<n)) ans=n;
            n="";
        }
    cout<<ans;
}

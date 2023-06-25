#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s,t;
ll k;
ll Check(ll i){
    for (ll j=0;j<s.size();j++)
        if (s[j]!=t[j+i]) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>t>>k;
    if (t.size()!=s.size()*k){
        cout<<"NO";
        return 0;
    }
    for (ll i=0;i<t.size();i+=s.size())
        if (!Check(i)){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll ans=0;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++) ans+=int(s[i])-48;
    (ans%10==9) ? cout<<"YES" : cout<<"NO";
}

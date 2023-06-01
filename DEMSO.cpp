#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    s='?'+s+'?';
    for (ll i=1;i<s.size();i++)
        if (s[i]>='0' && s[i]<='9' && (s[i-1]<'0' || s[i-1]>'9')) ans++;
    cout<<ans;
}

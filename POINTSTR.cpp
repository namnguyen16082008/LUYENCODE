#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=7;i<s.size();i++) ans+=(s[i]=='e' && s[i-1]=='d' && s[i-2]=='o' && s[i-3]=='c' && s[i-4]=='n' && s[i-5]=='e' && s[i-6]=='y' && s[i-7]=='u' && s[i-8]=='l');
    cout<<ans;
}

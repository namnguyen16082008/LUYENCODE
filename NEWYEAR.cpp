#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
string s;
unordered_map <string,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin.ignore();
    for (ll i=1;i<=n;i++){
        getline(cin,s);
        ans+=mp[s]==0;
        mp[s]=1;
    }
    cout<<ans;
}

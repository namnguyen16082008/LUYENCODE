#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=110;
ll n,a,x,ans=0;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=mp[x-a*a];
        mp[a]++;
    }
    cout<<ans;
}

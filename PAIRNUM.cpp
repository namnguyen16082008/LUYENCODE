#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,k,a,ans=0;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=(mp[a-k]+mp[a+k]);
        mp[a]++;
    }
    cout<<ans;
}

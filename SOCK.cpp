#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n,a,ans=0;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        mp[a]++;
        if (mp[a]==2){
            ans++;
            mp[a]=0;
        }
    }
    cout<<ans;
}

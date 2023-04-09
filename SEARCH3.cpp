#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
  	ll a[n+1],b[m+1];
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (mp[a[i]]==0) mp[a[i]]=i;
    }
    for (ll i=1;i<=m;i++){
        cin>>b[i];
        cout<<mp[b[i]]<<" ";
    }
}

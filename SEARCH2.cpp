#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,x;
unordered_map <ll,ll> cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (cnt[x]==0) cnt[x]=i;
    }
    for (ll i=1;i<=m;i++){
        cin>>x;
        cout<<cnt[x]<<" ";
    }
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    unordered_map <ll,ll> cnt;
    for (ll i=1;i<=n;i++){
        cin>>x;
        cnt[x]++;
    }
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (cnt[x]>0) ans-=2;
        cnt[x]--;
    }
    cout<<ans+n*2;
}

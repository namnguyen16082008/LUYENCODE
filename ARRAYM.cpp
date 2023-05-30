#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10000005,inf=1e+18;
ll n,q,a[N],x,y,k,ans=-inf;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    while (q--){
        cin>>x>>y>>k;
        a[x]+=k;
        a[y+1]-=k;
    }
    a[0]=0;
    for (ll i=1;i<=n;i++){
        a[i]+=a[i-1];
        ans=max(ans,a[i]);
    }
    cout<<ans;
}

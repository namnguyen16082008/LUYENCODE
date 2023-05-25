#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005,inf=1e+18;
ll n,k,a[N],x[N],o=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) x[i]=-inf;
    x[0]=0;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++){
        for (ll j=max(i-k,o);j<i;j++)
            x[i]=max(x[i],a[i]+x[j]);
        ans=max(ans,x[i]);
    }
    cout<<ans;
}

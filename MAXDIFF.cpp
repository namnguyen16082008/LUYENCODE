#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000,inf=1e+18;
ll n,ans=-inf,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (i>1) ans=max(ans,a[i]-a[i-1]);
        if (i>2) ans=max(ans,a[i]-a[i-2]);
    }
    cout<<ans;
}

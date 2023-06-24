#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000000,inf=1e+18;
ll n,ans=-inf,a[N+5],x[N+5],y[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    x[0]=0,y[n+1]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        x[i]=__gcd(x[i-1],a[i]);
    }
    for (ll i=n;i>=1;i--) y[i]=__gcd(y[i+1],a[i]);
    for (ll i=1;i<=n;i++) ans=max(ans,__gcd(x[i-1],y[i+1]));
    cout<<ans;
}

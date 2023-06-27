#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000,inf=1e+18;
ll t,n,a[N+5]={};
void Solve(){
    cin>>n;
    ll ans=-inf,ans1=-inf,ans2=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ans1=max(ans1,a[i]);
        ans2+=a[i]*(a[i]>0);
        if (a[i-1]>0) a[i]+=a[i-1];
        ans=max(ans,a[i]);
    }
    if (ans1<0) ans2=ans1;
    cout<<ans2<<" "<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

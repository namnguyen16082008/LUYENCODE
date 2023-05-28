#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=6705,inf=1e+18;
ll n,k,ans=0,ans1=inf,a[N],x[N]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ans+=a[i];
        ll o=i-k,m=inf;
        if (o<1) o=1;
        for (ll j=o;j<i;j++)
            m=min(m,x[j]);
        (i<=k) ? x[i]=a[i] : x[i]=a[i]+m;
    }
    for (ll i=n;i>n-k;i--) ans1=min(ans1,x[i]);
    cout<<ans-ans1;
}

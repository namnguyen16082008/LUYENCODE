#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000,inf=1e+18;
ll n,ans=inf,d=1,a[N+5],b[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for (ll i=1;i<=n;i++){
        while (abs(a[i]-b[d+1])<=abs(a[i]-b[d]) && d<n) d++;
        ans=min(ans,abs(a[i]-b[d]));
    }
    cout<<ans;
}

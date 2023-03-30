#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005;
ll n,a[N],ans=-1e+18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<n;i++) ans=max(ans,a[i]+a[i+1]);
    ans=max(ans,a[n]+a[1]);
    for (ll i=1;i<n;i++)
        if (a[i]+a[i+1]==ans){
            cout<<a[i]<<" "<<a[i+1];
            return 0;
        }
    cout<<a[n]<<" "<<a[1];
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000;
ll n,ans=0,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<n;i++)
        for (ll j=i+1;j<=n;j++)
            ans+=a[i]>2*a[j];
    cout<<ans;
}

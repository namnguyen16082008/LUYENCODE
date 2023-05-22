#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=45,M=10005;
ll n,m,W[M]={},w[N],v[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++) cin>>w[i]>>v[i];
    for (ll i=1;i<=n;i++)
        for (ll j=m;j>=w[i];j--)
            if (j==w[i] || W[j-w[i]]!=0)
                W[j]=max(W[j],W[j-w[i]]+v[i]);
    for (ll i=m;i>=1;i--)
        ans=max(ans,W[i]);
    cout<<ans;
}

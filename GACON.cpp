#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,ans=-1e+18,a[1001][1001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>a[i][j];
    for (ll i=n-1;i>=1;i--)
        for (ll j=1;j<=m;j++)
            if (j==1) a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
            else if (j==m) a[i][j]+=max(a[i+1][j],a[i+1][j-1]);
            else a[i][j]+=max(a[i+1][j],max(a[i+1][j-1],a[i+1][j+1]));
    for (ll i=1;i<=m;i++) ans=max(ans,a[1][i]);
    cout<<ans;
}

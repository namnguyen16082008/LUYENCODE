#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=505,inf=1e+18;
ll n,m,k,a[N][N],ans=inf;
char o;
ll Get(ll x, ll y){
    ll s=inf;
    for (ll i=x;i<=n;i++)
        for (ll j=y;j<=m;j++)
            s=min(s,a[i][j]-a[i-x][j]-a[i][j-y]+a[i-x][j-y]);
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for (ll i=0;i<=n;i++) a[i][0]=0;
    for (ll i=0;i<=m;i++) a[0][i]=0;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>o;
            a[i][j]=int(o)-48;
            a[i][j]+=(a[i-1][j]+a[i][j-1]-a[i-1][j-1]);
        }
    for (ll i=1;i<=k;i++)
        if (k%i==0 && i<=n && k/i<=m)
            ans=min(ans,Get(i,k/i));
    (ans==inf) ? cout<<-1 : cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n,m,ans=0;
char a[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>a[i][j];
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            if (a[i][j]=='.')
                ans+=((a[i+1][j]=='.' && i<n)+(a[i][j+1]=='.' && j<m));
    cout<<ans;
}

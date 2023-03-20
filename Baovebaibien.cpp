#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,x,ans=0,a[1005][1005]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>x;
            if (x==1){
                a[i-1][j-1]=1;a[i-1][j]=1;a[i-1][j+1]=1;
                a[i][j-1]=1;a[i][j]=1;a[i][j+1]=1;
                a[i+1][j-1]=1;a[i+1][j]=1;a[i+1][j+1]=1;
            }
        }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            if (a[i][j]==1) ans++;
    cout<<ans;
}

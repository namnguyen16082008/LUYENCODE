#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,m,a[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>a[i][j];
    for (ll i=n;i>=1;i--)
        for (ll j=m;j>=1;j--)
            if ((i!=n || j!=m) && a[i][j]!=-1){
                if ((a[i+1][j]==-1 || i==n) && (a[i][j+1]==-1 || j==m)) a[i][j]=-1;
                else a[i][j]+=max(a[i+1][j]*(a[i+1][j]!=-1 && i<n),a[i][j+1]*(a[i][j+1]!=-1 && j<m));
            }
    cout<<a[1][1];
}


#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=505;
ll n,m,a[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>a[i][j];
            if (i==1 && j!=1) a[i][j]+=a[i][j-1];
            else if (i!=1 && j==1) a[i][j]+=a[i-1][j];
            else if (i!=1 && j!=1) a[i][j]+=max(a[i-1][j],a[i][j-1]);
        }
    cout<<a[n][m];
}

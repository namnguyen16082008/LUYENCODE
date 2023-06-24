#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100;
ll n,c,d=0,ans=0,a[N+5][N+5],Check[N+5]={};
void DFS(ll i){
    Check[i]=1;
    for (ll j=1;j<=n;j++)
        if (a[i][j]==1 && !Check[j]) DFS(j);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++)
            cin>>a[i][j];
    for (ll i=1;i<=n;i++)
        if (!Check[i]){
            d++;
            DFS(i);
        }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<i;j++)
            if (a[i][j]){
                c=0;
                a[i][j]=0;a[j][i]=0;
                for (ll k=1;k<=n;k++) Check[k]=0;
                for (ll k=1;k<=n;k++)
                    if (!Check[k]){
                        c++;
                        DFS(k);
                    }
                a[i][j]=1;a[j][i]=1;
                ans+=c>d;
            }
    cout<<ans;
}

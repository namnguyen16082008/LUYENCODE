#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200;
ll n,m,q,a,b,c,d,x[N+5][N+5]={};
void Solve(){
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>x[i][j];
            x[i][j]+=(x[i-1][j]+x[i][j-1]-x[i-1][j-1]);
        }
    while (q--){
        cin>>a>>b>>c>>d;
        cout<<x[c][d]-x[a-1][d]-x[c][b-1]+x[a-1][b-1]<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>n>>m>>q) Solve();
}

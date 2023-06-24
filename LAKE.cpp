#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100;
ll n,m,k,ans=0,d=0,a[N+5][N+5],x[N+5][N+5],o1[4]={-1,0,1,0},o2[4]={0,-1,0,1};
void DFS(ll i, ll j){
	x[i][j]=0;
	d++;
	ans=max(ans,d);
	for (ll k=0;k<4;k++){
        ll i1=i+o1[k],j1=j+o2[k];
        if (a[i1][j1]==0 && x[i1][j1]==1 && i1>=1 && i1<=n && j1>=1 && j1<=m) DFS(i1,j1);
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>m>>k;
	for (ll i=1;i<=n;i++)
		for (ll j=1;j<=m;j++){
			a[i][j]=1;
			x[i][j]=1;
		}
	while (k--){
		ll o1,o2;
		cin>>o1>>o2;
		a[o1][o2]=0;
	}
	for (ll i=1;i<=n;i++)
		for (ll j=1;j<=m;j++)
			if (x[i][j]==1 && a[i][j]==0){
				d=0;
				DFS(i,j);
			}
	cout<<ans;
}

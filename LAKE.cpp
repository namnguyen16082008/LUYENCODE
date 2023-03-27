#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,k,a[101][101],x[101][101],d=0,z=0;
void Try(ll i, ll j){
	x[i][j]=0;
	z++;
	d=max(d,z);
	if (a[i-1][j]==0 && x[i-1][j]==1 && i>1) Try(i-1,j);
	if (a[i+1][j]==0 && x[i+1][j]==1 && i<n) Try(i+1,j);
	if (a[i][j-1]==0 && x[i][j-1]==1 && j>1) Try(i,j-1);
	if (a[i][j+1]==0 && x[i][j+1]==1 && j<m) Try(i,j+1);
	return;
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
				z=0;
				Try(i,j);
			}
	cout<<d;
}

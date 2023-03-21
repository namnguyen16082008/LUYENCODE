#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char a[101][101];
ll n,m,x[101][101],d=0;
void Try(ll i, ll j){
	x[i][j]=1;
	if (a[i-1][j]==a[i][j] && x[i-1][j]==0 && i>1) Try(i-1,j);
	if (a[i+1][j]==a[i][j] && x[i+1][j]==0 && i<n) Try(i+1,j);
	if (a[i][j-1]==a[i][j] && x[i][j-1]==0 && j>1) Try(i,j-1);
	if (a[i][j+1]==a[i][j] && x[i][j+1]==0 && j<m) Try(i,j+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>m;
	for (ll i=1;i<=n;i++)
		for (ll j=1;j<=m;j++){
			cin>>a[i][j];
			x[i][j]=0;
		}
	for (ll i=1;i<=n;i++)
		for (ll j=1;j<=m;j++)
			if (a[i][j]=='#' && x[i][j]==0){
				d++;
				Try(i,j);
			}
	cout<<d;
}

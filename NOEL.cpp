#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n,s,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	s=2*(n+2)-1;
	k=(s-1)/2+1;
	char a[n*3+3][s];
	for (ll i=1;i<=n*3+3;i++){
		for (ll j=1;j<=s;j++){
			if (j<k or j>s-k+1) a[i][j]='.';
			else if (j==k or j==s-k+1) a[i][j]='#';
			else a[i][j]='x';
		}
		k--;
		if (i==n or i==2*n+1) k=(s-1)/2+1;
	}
	for (ll i=1;i<=n*3+3;i++){
		for (ll j=1;j<=s;j++) cout<<a[i][j];
		cout<<endl;
	}
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a[100][100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
    	for (ll j=1;j<=i;j++){
    		if (j==1 or j==i) a[i][j]=1;
    		else a[i][j]=a[i-1][j-1]+a[i-1][j];
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

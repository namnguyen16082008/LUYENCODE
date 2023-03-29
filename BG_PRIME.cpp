#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
ll Prime(ll n){
	if (n<2) return 0;
	for (ll i=2;i<=sqrt(n);i++)
		if (n%i==0) return 0;
	return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	for (ll i=1;i<=sqrt(n);i++)
		if (Prime(i)==1) ans++;
	cout<<ans;
}

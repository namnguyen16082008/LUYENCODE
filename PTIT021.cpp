#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n,a,m1=-inf,m2=inf;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	for (ll i=1;i<=n;i++){
		cin>>a;
		m1=max(m1,a);
		m2=min(m2,a);
	}
	cout<<m1-m2-n+1;
}

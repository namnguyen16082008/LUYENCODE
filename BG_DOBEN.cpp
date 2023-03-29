#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll Tcs(ll n){
	ll s=0;
	while (n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	while (n!=Tcs(n)) n=Tcs(n);
	cout<<n;
}

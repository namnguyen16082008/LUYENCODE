#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll k,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>k;
	for (ll i=1;i<=k;i++)
		for (ll j=1;j<=k/i;j++)
            ans+=k/i/j;
	cout<<ans;
}

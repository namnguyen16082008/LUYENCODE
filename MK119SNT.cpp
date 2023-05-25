#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll t,x,y,a[N]={};
void SangNt(){
	a[1]=1;
	ll i=1;
	while (i*i<=N)
	{
		while (a[i]==1) i++;
		for (ll j=2;j<=N/i;j++) a[i*j]=1;
		i++;
	}
	for (ll i=1;i<=N;i++)
        a[i]=a[i-1]+(a[i]==0);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	SangNt();
	cin>>t;
	while (t--){
		cin>>x>>y;
		cout<<a[y]-a[x-1]<<endl;
	}
}

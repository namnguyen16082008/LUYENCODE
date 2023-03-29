#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,k,ans=0;
ll dn(ll n){
    ll s=0;
    while (n>0){
        s=s*10+n%10;
        n/=10;
	}
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>k;
    for (ll i=a;i<=b;i++)
        if (abs(i-dn(i))%k==0) ans++;
    cout<<ans;
}

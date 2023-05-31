#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll t,n;
double ans;
void Solve(){
    cin>>n;
    ans=0;
    for (ll i=n;i>=1;i--)
        ans=sqrt(ans+i);
    cout<<fixed<<setprecision(5)<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>t;
	while (t--) Solve();
}

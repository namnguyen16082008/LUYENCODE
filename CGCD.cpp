#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
void Solve(){
    cin>>n;
    ll ans=n;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            while (n%i==0) n/=i;
            ans=ans/i*(i-1);
        }
    if (n>1) ans=ans/n*(n-1);
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

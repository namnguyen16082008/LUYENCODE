#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,k,n,x;
void Solve(){
    cin>>n>>k;
    ll d=0;
    ll a[n+1];
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (x<=0) d++;
    }
    if (d<k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

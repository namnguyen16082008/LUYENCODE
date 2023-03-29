#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m=1e+18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ll a[n+1];
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n-5+1;i++)
        m=min(m,abs(a[i]-a[i+5-1]));
    cout<<m;
}

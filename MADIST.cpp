#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105,inf=1e+18;
ll n,a[N],b[N],ans=-inf;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        for (ll j=1;j<i;j++)
            ans=max(ans,abs(a[i]-a[j])+abs(b[i]-b[j]));
    }
    cout<<ans;
}


#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=55;
ll n,k,a[N],x[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=k;i++) cin>>x[i];
    a[0]=1;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=k;j++)
            if (i>=x[j]) a[i]+=a[i-x[j]];
    cout<<a[n];
}


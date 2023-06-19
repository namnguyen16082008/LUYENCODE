#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005,MOD=1e6+7;
ll n,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[1]=1,a[2]=1;
    for (ll i=3;i<=n;i++) a[i]=(a[i-1]+a[i-2])%MOD;
    cout<<a[n];
}


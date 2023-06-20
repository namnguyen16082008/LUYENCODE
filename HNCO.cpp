#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll n,ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) ans=(ans*2)%MOD;
    cout<<ans-1;
}


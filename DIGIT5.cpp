#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,ans=0;
ll Cal(ll n){
    ll s=0;
    while (n>0){
        s+=(n%10==5);
        n/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=n;i<=m;i++) ans+=Cal(i);
    cout<<ans;
}


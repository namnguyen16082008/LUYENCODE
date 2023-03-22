#include <bits/stdc++.h>
#define ll long long int

ll n,c,w[25],mp[25],ans=0;
using namespace std;
void Check(){
    ll s=0;
    for (ll i=1;i<=n;i++)
        if (mp[i]==1) s+=w[i];
    if (s<=c) ans=max(ans,s);
}
void Try(ll i){
    for (ll j=0;j<=1;j++){
        mp[i]=j;
        if (i<n) Try(i+1);
        else Check();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>c;
    for (ll i=1;i<=n;i++) cin>>w[i];
    Try(1);
    cout<<ans;
}

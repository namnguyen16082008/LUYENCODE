#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,x,a[25],b[25]={};
unordered_map <ll,ll> mp;
void Check(){
    ll s=0;
    for (ll i=1;i<=n;i++) s+=a[i]*b[i];
    mp[s]=1;
}
void Try(ll i){
    for (ll j=0;j<=1;j++){
        b[i]=j;
        if (i<n) Try(i+1);
        else Check();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++) cin>>a[i];
    Try(1);
    while (m--){
        cin>>x;
        cout<<mp[x];
    }
}

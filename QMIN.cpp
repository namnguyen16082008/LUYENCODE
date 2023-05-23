#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005,inf=1e+18;
ll n,q,a[N],ST[4*N],x,y;
void Build(ll id, ll l, ll r){
    if (l==r){
        ST[id]=a[l];
        return;
    }
    ll md=(l+r)/2;
    Build(id*2,l,md);
    Build(id*2+1,md+1,r);
    ST[id]=min(ST[id*2],ST[id*2+1]);
}
ll Find(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return inf;
    if (l>=x && r<=y) return ST[id];
    ll md=(l+r)/2;
    return min(Find(id*2,l,md,x,y),Find(id*2+1,md+1,r,x,y));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for (ll i=1;i<=n;i++) cin>>a[i];
    Build(1,1,n);
    while (q--){
        cin>>x>>y;
        cout<<Find(1,1,n,x,y)<<" ";
    }
}

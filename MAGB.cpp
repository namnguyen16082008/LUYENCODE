#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a,ST[4*N]={},ans=0;
void Update(ll id, ll l, ll r, ll x){
    if (l>x || r<x) return;
    if (l==r){
        ST[id]++;
        return;
    }
    ll md=(l+r)/2;
    Update(id*2,l,md,x);
    Update(id*2+1,md+1,r,x);
    ST[id]=ST[id*2]+ST[id*2+1];
}
ll Get(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return 0;
    if (l>=x && r<=y) return ST[id];
    ll md=(l+r)/2;
    return Get(id*2,l,md,x,y)+Get(id*2+1,md+1,r,x,y);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=Get(1,1,N-5,a+1,N-5);
        Update(1,1,N-5,a);
    }
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,m,t,x,y,z,ST[4*N]={},Add[4*N]={};
void Fix(ll id, ll l, ll r){
    if (l==r) return;
    ST[id*2]+=Add[id];
    Add[id*2]+=Add[id];
    ST[id*2+1]+=Add[id];
    Add[id*2+1]+=Add[id];
    Add[id]=0;
}
void Update(ll id, ll l, ll r, ll x, ll y, ll z){
    if (l>y || r<x) return;
    if (l>=x && r<=y){
        Add[id]+=z;
        ST[id]+=z;
        return;
    }
    ll md=(l+r)/2;
    Fix(id,l,r);
    Update(id*2,l,md,x,y,z);
    Update(id*2+1,md+1,r,x,y,z);
    ST[id]=max(ST[id*2],ST[id*2+1]);
}
ll Get_Max(ll id, ll l, ll r, ll x, ll y){
    if (l>y || r<x) return -1e+18;
    if (l>=x && r<=y) return ST[id];
    ll md=(l+r)/2;
    Fix(id,l,r);
    return max(Get_Max(id*2,l,md,x,y),Get_Max(id*2+1,md+1,r,x,y));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    while (m--){
        cin>>t;
        if (t==0){
            cin>>x>>y>>z;
            Update(1,1,n,x,y,z);
        }
        else if (t==1){
            cin>>x>>y;
            cout<<Get_Max(1,1,n,x,y)<<endl;
        }
    }
}

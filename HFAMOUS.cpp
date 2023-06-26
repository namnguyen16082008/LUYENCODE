#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,m,k,x,y,a[N+5]={},b[N+5]={};
vector <ll> v[N+5],ans;
void DFS(ll i){
    a[i]=1;
    if (b[i]<k){
        for (auto o : v[i]){
            if (b[o]==k) a[o]=0;
            b[o]--;
        }
    }
    for (auto o : v[i])
        if (!a[o]) DFS(o);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    while (m--){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
        b[x]++;
        b[y]++;
    }
    for (ll i=1;i<=n;i++)
        if (!a[i]) DFS(i);
    for (ll i=1;i<=n;i++)
        if (b[i]>=k) ans.push_back(i);
    cout<<ans.size()<<endl;
    for (auto o : ans) cout<<o<<" ";
}

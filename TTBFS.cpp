#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100;
ll n,m,a,b,Check[N+5]={};
vector <ll> v[N+5];
void BFS(ll i){
    Check[i]=1;
    deque <ll> d;
    d.push_back(i);
    while (!d.empty()){
        ll k=d.front();
        d.pop_front();
        cout<<k<<endl;
        for (auto x : v[k])
            if (Check[x]==0){
                d.push_back(x);
                Check[x]=1;
            }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (ll i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
    for (ll i=1;i<=n;i++)
        if (!Check[i]) BFS(i);
}

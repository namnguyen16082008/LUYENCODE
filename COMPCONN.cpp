#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000;
ll n,m,a,b,d=0,Check[N+5]={};
vector <ll> v[N+5],v1[N+5];
void DFS(ll i){
    Check[i]=1;
    v1[d].push_back(i);
    for (auto x : v[i])
        if (!Check[x]) DFS(x);
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
    for (ll i=1;i<=n;i++)
        if (!Check[i]){
            d++;
            DFS(i);
        }
    cout<<d<<endl;
    for (ll i=1;i<=d;i++){
        sort(v1[i].begin(),v1[i].end());
        cout<<v1[i].size()<<" ";
        for (ll j=0;j<v1[i].size();j++)
            (j!=v1[i].size()-1) ? cout<<v1[i][j]<<" " : cout<<v1[i][j];
        if (i<d) cout<<endl;
    }
}

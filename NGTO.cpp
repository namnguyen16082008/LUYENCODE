#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=300005;
ll n,a[N]={};
vector <ll> v;
void Build(){
    a[1]=1;
    ll i=1;
    while (i*i<=N){
        while (a[i]==1) i++;
        for (ll j=2;j<=N/i;j++)
            a[i*j]=1;
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>n;
    for (ll i=2;i<(n+1)/2;i++)
        if (a[i]==0 && a[n-i]==0) v.push_back(i);
    cout<<v.size()<<endl;
    for (ll i=0;i<v.size();i++) cout<<v[i]<<" "<<n-v[i]<<endl;
}

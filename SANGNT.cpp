#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,a[N]={};
void Build(){
    ll i=1;
    a[1]=1;
    while (i*i<=N){
        while (a[i]==1) i++;
        for (ll j=2;j<=N/i;j++) a[i*j]=1;
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>n;
    for (ll i=1;i<=n;i++)
        if (a[i]==0) cout<<i<<" ";
}

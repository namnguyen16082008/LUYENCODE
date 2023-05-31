#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll t,n,a[N]={};
void Build(){
    for (ll i=3;i<=N-5;i+=2)
        for (ll j=2;j<=(N-5)/i;j++)
            a[i*j]=i;
    for (ll i=1;i<=N-5;i++)
        if (a[i]==0) a[i]=1;
}
void Solve(){
    cin>>n;
    cout<<a[n]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--) Solve();
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,inf=1e+18;
ll t,n,a[N];
void Build(){
    a[1]=0;
    for (ll i=2;i<=N-5;i++){
        a[i]=inf;
        if (i%2==0) a[i]=min(a[i],a[i/2]+1);
        if (i%3==0) a[i]=min(a[i],a[i/3]+1);
        a[i]=min(a[i],a[i-1]+1);
    }
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

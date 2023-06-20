#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll t,n,a[N];
void Build(){
    a[0]=0,a[1]=1;
    for (ll i=1;i<=N-5;i++){
        if (i%2==0) a[i]=a[i/2];
        else a[i]=a[i/2]+a[i/2+1];
    }
    for (ll i=1;i<=N-5;i++) a[i]=max(a[i],a[i-1]);
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

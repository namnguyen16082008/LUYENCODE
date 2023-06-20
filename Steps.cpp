#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,MOD=15122011;
ll n,k,a,x[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) x[i]=-1;
    for (ll i=1;i<=k;i++){
        cin>>a;
        x[a]=0;
    }
    x[0]=0,x[1]=1;
    for (ll i=2;i<=n;i++) x[i]=((x[i-1]+x[i-2])*(x[i]==-1))%MOD;
    cout<<x[n];
}

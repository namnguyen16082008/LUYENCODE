#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll K=100;
ll n,k,a,x[2][K+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    x[0][0]=1;
    for (ll i=1;i<K;i++) x[0][i]=0;
    for (ll i=1;i<=n;i++){
        cin>>a;
        for (ll j=0;j<k;j++) x[i%2][j]=x[(i+1)%2][((j-a)%k+k)%k]+1;
    }
    cout<<x[n%2][0]-1;
}

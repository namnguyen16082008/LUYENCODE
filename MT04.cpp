#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n,m,x,a[N*N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>x;
    for (ll i=1;i<=n*m;i++) cin>>a[i];
    sort(a+(x-1)*m+1,a+x*m+1);
    for (ll i=1;i<=n;i++){
        for (ll j=1;j<=m;j++)
            cout<<a[(i-1)*m+j]<<" ";
        cout<<endl;
    }
}

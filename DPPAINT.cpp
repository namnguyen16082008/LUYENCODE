#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N][3];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0][0]=0,a[0][1]=0,a[0][2]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        a[i][0]+=min(a[i-1][1],a[i-1][2]);
        a[i][1]+=min(a[i-1][0],a[i-1][2]);
        a[i][2]+=min(a[i-1][0],a[i-1][1]);
    }
    cout<<min(a[n][0],min(a[n][1],a[n][2]));
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=255;
ll n,m,c,a[N]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    a[0]=1;
    for (ll i=1;i<=m;i++){
        cin>>c;
        for (ll j=c;j<=n;j++) a[j]+=a[j-c];
    }
    cout<<a[n];
}


#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=500000;
ll n,d1=0,d2=0,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for (ll i=1;i<=n;i++){
        d2+=d1*(a[i]*3==a[n]*2)*(i<n);
        d1+=(a[i]*3==a[n])*(i<n-1);
    }
    cout<<d2;
}

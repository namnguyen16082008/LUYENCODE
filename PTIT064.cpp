#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,a[2*N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=2*n;i++) cin>>a[i];
    sort(a+1,a+2*n+1);
    for (ll i=1;i<=2*n;i++) cout<<a[i]<<" ";
}

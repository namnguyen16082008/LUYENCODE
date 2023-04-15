#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005;
ll n,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+2,a+n);
    for (ll i=1;i<=n;i++) cout<<a[i]<<" ";
}

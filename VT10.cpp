#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a[10001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    for (ll i=1;i<=n;i++) cout<<a[i]<<" ";
}

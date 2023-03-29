#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1001;
ll n,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    cout<<a[1]<<endl<<a[2]<<endl<<a[3];
}


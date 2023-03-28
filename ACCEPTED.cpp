#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MaxN=51;
ll n,a[MaxN],x=0,y=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n/2;i++) x+=a[i];
    for (ll i=n/2+1;i<=n;i++) y+=a[i];
    cout<<y-x;
}

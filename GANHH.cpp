#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,ans=0;
ll Check(ll n){
    if (n==1) return 0;
    ll s=0;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0){
            s+=i;
            if (i!=n/i) s+=n/i;
        }
    return (s<2*n) ? 1 : 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=Check(a);
    }
    cout<<ans;
}

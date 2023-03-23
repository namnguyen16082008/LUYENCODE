#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e9+7;
ll a,n;
ll Pow(ll a, ll n){
    ll ans=1;
    while (n>0){
        ll s=a,d=1;
        while (d*2<=n){
            d*=2;
            s=(s*s)%inf;
        }
        n-=d;
        ans=(ans*s)%inf;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>n;
    cout<<Pow(a,n);
}

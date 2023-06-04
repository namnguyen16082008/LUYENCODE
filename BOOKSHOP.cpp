#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ans+=a[i];
    }
    sort(a+1,a+n+1,greater<ll>());
    for (ll i=3;i<=n;i+=3) ans-=a[i];
    cout<<ans;
}

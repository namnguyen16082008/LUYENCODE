#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n,a,ma=-inf,mi=inf,ans1=-1,ans2=-1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans1+=a>ma;
        ans2+=a<mi;
        ma=max(ma,a);
        mi=min(mi,a);
    }
    cout<<ans1<<" "<<ans2;
}

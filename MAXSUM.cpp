#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,a[N],ans=0,m=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
        ans=max(ans,a[i]-m);
        m=min(m,a[i]);
    }
    cout<<ans;
}

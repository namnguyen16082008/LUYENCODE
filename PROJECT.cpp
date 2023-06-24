#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=25;
ll n,s,ans=0,c[N+5],p[N+5],a[N+5];
void Check(){
    ll o=0;
    for (ll i=1;i<=n;i++)
        o+=a[i]*p[i];
    ans=max(ans,o);
}
void Try(ll i, ll o){
    for (ll j=0;j<=1;j++){
        a[i]=j;
        o+=c[i]*j;
        if (o>s) return;
        if (i<n) Try(i+1,o);
        else Check();
        o-=c[i]*j;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=n;i++) cin>>c[i];
    for (ll i=1;i<=n;i++) cin>>p[i];
    Try(1,0);
    cout<<ans;
}

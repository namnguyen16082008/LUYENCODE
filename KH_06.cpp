#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,ans[N],x[N];
pair <ll,ll> a[N];
bool comp(const pair <ll,ll> a, const pair <ll,ll> b){
    return (a.second<b.second || (a.second==b.second && a.first<b.first));
}
ll Find(ll o, ll l, ll r){
    while (l<r){
        ll md=(l+r)/2;
        if (a[md+1].second<=o) l=md+1;
        else r=md;
    }
    return l;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
    sort(a+1,a+n+1,comp);
    x[0]=0,ans[0]=0;
    for (ll i=1;i<=n;i++){
        x[i]=ans[Find(a[i].first,0,i-1)]+1;
        ans[i]=max(ans[i-1],x[i]);
    }
    cout<<ans[n];
}

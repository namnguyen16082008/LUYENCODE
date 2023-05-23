#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=50,S=30005;
ll n,s,a[S]={},t[N],d[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=n;i++) cin>>t[i];
    for (ll i=1;i<=n;i++) cin>>d[i];
    for (ll i=1;i<=n;i++)
        for (ll j=s;j>=t[i];j--)
            if (j==t[i] || a[j-t[i]]!=0) a[j]=max(a[j],a[j-t[i]]+d[i]);
    for (ll i=1;i<=s;i++) ans=max(ans,a[i]);
    cout<<ans;
}

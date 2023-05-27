#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll V=100005,inf=1e+18;
ll n,s,w,v,a[V],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=V-5;i++) a[i]=inf;
    for (ll i=1;i<=n;i++){
        cin>>w>>v;
        for (ll j=V-5;j>=v;j--)
            if (j==v || a[j-v]!=inf){
                a[j]=min(a[j],a[j-v]+w);
                if (a[j]<=s) ans=max(ans,j);
            }
    }
    cout<<ans;
}

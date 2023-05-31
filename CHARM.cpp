#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll M=20005;
ll n,m,a[M]={},w,d,ans=0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++){
        cin>>w>>d;
        for (ll j=m;j>=w;j--)
            if (j==w || a[j-w]!=0) a[j]=max(a[j],a[j-w]+d);
    }
    for (ll i=1;i<=m;i++) ans=max(ans,a[i]);
    cout<<ans;
}

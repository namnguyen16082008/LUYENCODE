#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll W=100005;
ll n,s,w,v,a[W]={},ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=n;i++){
        cin>>w>>v;
        for (ll j=s;j>=w;j--)
            if (j==w || a[j-w]!=0){
                a[j]=max(a[j],a[j-w]+v);
                ans=max(ans,a[j]);
            }
    }
    cout<<ans;
}

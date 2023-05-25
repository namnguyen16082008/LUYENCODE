#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=5005;
ll n,M,x,y,a[N]={},ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>M;
    for (ll i=1;i<=n;i++){
        cin>>x>>y;
        for (ll j=M;j>=x;j--)
            if (j==x || a[j-x]!=0) a[j]=max(a[j],a[j-x]+y);
    }
    for (ll i=1;i<=M;i++) ans=max(ans,a[i]);
    cout<<ans;
}

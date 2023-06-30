#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=33;
ll c,n,a,b,ans=0,x[A+5]={},mp[A+5]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c>>n;
    x[c]=1;
    for (ll i=1;i<=n;i++){
        cin>>a>>b;
        if (x[b]){
            x[b]=0;
            x[a]=1;
            mp[a]++;
            ans+=mp[a]==1;
        }
    }
    for (ll i=1;i<=n;i++)
        if (x[i]) cout<<i<<" "<<ans;
}

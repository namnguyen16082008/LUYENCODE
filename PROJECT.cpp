#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=25,S=30000;
ll n,s,p,ans=0,c[N+5],x[S+5]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=n;i++) cin>>c[i];
    for (ll i=1;i<=n;i++){
        cin>>p;
        for (ll j=s;j>=c[i];j--)
            if (j==c[i] || x[j-c[i]]!=0) x[j]=max(x[j],x[j-c[i]]+p);
    }
    for (ll i=1;i<=s;i++) ans=max(ans,x[i]);
    cout<<ans;
}

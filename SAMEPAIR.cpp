#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll l,r,ans=0,a[N],mp[N]={};
void Build(){
    for (ll i=1;i<N;i++) a[i]=1;
    for (ll i=2;i<N/2;i++)
        if (a[i]==1)
            for (ll j=2;j<=N/i;j++)
                a[i*j]*=i;
    for (ll i=2;i<N;i++)
        if (a[i]==1) a[i]=i;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>l>>r;
    for (ll i=l;i<=r;i++){
        ans+=mp[a[i]];
        mp[a[i]]++;
    }
    cout<<ans;
}

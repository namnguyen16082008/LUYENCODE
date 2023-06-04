#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,a,mp[N]={},ans=0,ans1=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        mp[a]++;
        ans+=mp[a]==2;
        ans1+=mp[a]==4;
    }
    cout<<ans*(ans-1)/2+ans1;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=1000005;
ll n,a,mp[A]={},ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        mp[a]++;
        ans+=mp[a]==1;
        ans-=mp[a]==2;
    }
    cout<<ans;
}

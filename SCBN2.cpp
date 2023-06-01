#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=50005;
ll n,a,mp[A]={},ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=mp[a];
        mp[a]++;
    }
    cout<<ans;
}

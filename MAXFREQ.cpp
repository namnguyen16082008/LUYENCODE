#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,A=100005;
ll n,a[N],mp[A]={},ans=0,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for (ll i=n;i>=1;i--)
        if (mp[a[i]]>=ans){
            ans=mp[a[i]];
            x=a[i];
        }
    cout<<x<<" "<<ans;
}

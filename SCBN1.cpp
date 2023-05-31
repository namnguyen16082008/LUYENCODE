#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],ans=0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ans+=(a[i]==a[i-1] && i>1);
    }
    cout<<ans;
}

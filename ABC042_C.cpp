#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,a;
unordered_map <ll,ll> mp;
ll kt(ll n){
    while (n>0){
        if (mp[n%10]==1) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=k;i++){
        cin>>a;
        mp[a]=1;
    }
    while (kt(n)==0) n++;
    cout<<n;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a,ans=0;
unordered_map <ll,ll> mp1,mp2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (a>0){
            ans+=mp2[a];
            mp2[a]+=mp1[a];
            mp1[a]++;
        }
    }
    cout<<ans;
}

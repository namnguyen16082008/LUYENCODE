#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a;
vector <ll> v;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        mp[a]++;
        if (mp[a]==2){
            mp[a]=0;
            v.push_back(a);
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    (v.size()>1) ? cout<<v[0]*v[1] : cout<<0;
}

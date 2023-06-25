#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
ll ans=0;
unordered_map <char,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>k){
        ans+=mp[k]==0;
        mp[k]=1;
    }
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll ans=0;
ll Find(ll n){
    ll s=0;
    while (n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++) ans+=int(s[i])-48;
    while (ans>9) ans=Find(ans);
    cout<<ans;
}

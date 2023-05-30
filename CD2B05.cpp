#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
string s;
ll Change(ll n){
    ll s=0;
    while (n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
void Solve(){
    cin>>s;
    n=0;
    for (ll i=0;i<s.size();i++) n+=(int(s[i])-48);
    while (n>9) n=Change(n);
    (n==9) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

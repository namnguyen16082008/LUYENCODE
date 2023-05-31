#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a;
vector <ll> v;
ll Pr(ll n){
    if (n<=3) return n>1;
    if (n%2==0 || n%3==0) return 0;
    ll i=5;
    while (i*i<=n){
        if (n%i==0 || n%(i+2)==0) return 0;
        i+=6;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (Pr(a)==1) v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<v.size();i++)
        if (i==0 || v[i]!=v[i-1]) cout<<v[i]<<" ";
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,a;
vector <ll> v;
ll Check(ll n){
    ll x=(ll)sqrt(n);
    return x*x==n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n*m;i++){
        cin>>a;
        if (Check(a)==1) v.push_back(a);
    }
    if (v.size()==0) cout<<"NOT FOUND";
    else{
        sort(v.begin(),v.end());
        for (ll i=0;i<v.size();i++)
            if (i==0 || v[i]!=v[i-1]) cout<<v[i]<<" ";
    }
}

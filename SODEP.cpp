#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll l,r,x[10];
vector <ll> v;
void Check(ll n){
    ll s=0,t=0;
    for (ll i=1;i<=(n+1)/2;i++) x[n-i+1]=x[i];
    for (ll i=1;i<=n;i++){
        s=s*10+x[i];
        t+=x[i];
    }
    if (t%10!=0) return;
    v.push_back(s);
}
void Try(ll i, ll n){
    for (ll j=(i==1);j<=9;j++){
        x[i]=j;
        if (i<(n+1)/2) Try(i+1,n);
        else Check(n);
    }
}
ll Find(ll n){
    if (n<v[0]) return 0;
    ll a=0,b=v.size()-1;
    while (a<b){
        ll md=(a+b)/2;
        if (v[md+1]<=n) a=md+1;
        else b=md;
    }
    return a+1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i=1;i<=9;i++) Try(1,i);
    while (cin>>l>>r) cout<<Find(r)-Find(l-1)<<endl;
}


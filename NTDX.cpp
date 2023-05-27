#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10;
ll a,b,x[N],kt=0;
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
void Check(ll n){
    ll s=0;
    for (ll i=1;i<=n;i++) s=s*10+x[i];
    if (Pr(s)==1 && s>=a && s<=b){
        cout<<s<<endl;
        kt=1;
    }
}
void Try(ll i, ll n){
    if (i==1){
        for (ll j=1;j<=9;j++){
            x[i]=j;
            x[n-i+1]=j;
            if (i<(n+1)/2) Try(i+1,n);
            else Check(n);
        }
    }
    else if (i!=1){
        for (ll j=0;j<=9;j++){
            x[i]=j;
            x[n-i+1]=j;
            if (i<(n+1)/2) Try(i+1,n);
            else Check(n);
        }
    }
}
void Build(){
    for (ll i=1;i<=8;i++) Try(1,i);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    Build();
    if (kt==0) cout<<kt;
}

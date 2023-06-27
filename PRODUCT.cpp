#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll d,a,b;
ll X(ll n, ll x){
    ll s=0;
    while (n>0){
        s+=n/x;
        n/=x;
    }
    return s;
}
ll Y(ll n, ll x){
    ll s=0;
    while (n%x==0){
        s++;
        n/=x;
    }
    return s;
}
ll Cal(ll i){
    return (X(b/d,i)-X((a-1)/d,i))+(b/d-(a-1)/d)*Y(d,i);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>d>>a>>b;
    cout<<min(Cal(2),Cal(5));
}

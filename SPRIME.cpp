#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=15;
ll n,a[N];
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
void Try(ll i, ll s){
    for (ll j=(i==1);j<=9;j++){
        s=s*10+j;
        if (Pr(s)==1){
            if (i<n) Try(i+1,s);
            else cout<<s<<" ";
        }
        s/=10;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    Try(1,0);
}

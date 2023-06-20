#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,s=0,ans=0;
ll Pr(ll n){
    if (n<=3) return n>1;
    if (n%2==0 || n%3==0) return 0;
    for (ll i=5;i*i<=n;i+=6)
        if (n%i==0 || n%(i+2)==0) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=1;i<=31;i++){
        s=(s+1)*2-1;
        if (s>b) break;
        ans+=(s>=a && s<=b && Pr(s)==1);
    }
    cout<<ans;
}


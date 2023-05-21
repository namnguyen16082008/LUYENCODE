#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll x,n;
double ans=0;
ll Gthua(ll x){
    return (x==1) ? x : x*Gthua(x-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>n;
    for (ll i=1;i<=n;i++)
        ans+=pow(x,i)/Gthua(i);
    cout<<fixed<<setprecision(2)<<ans;
}

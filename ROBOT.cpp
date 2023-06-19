#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n,ans=inf;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0) ans=min(ans,i+n/i-2);
    cout<<ans;
}


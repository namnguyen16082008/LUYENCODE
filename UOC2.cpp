#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,d,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    d=__gcd(a,b);
    for (ll i=1;i<=sqrt(d);i++)
        if (d%i==0)
            (i*i==d) ? ans+=i : ans+=i+d/i;
    cout<<ans;
}

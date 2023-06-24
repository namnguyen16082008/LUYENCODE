#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=1;i<=sqrt(a);i++)
        if (a%i==0) ans+=i*(b%i!=0)+a/i*(b%(a/i)!=0)*(i*i!=a);
    cout<<ans;
}

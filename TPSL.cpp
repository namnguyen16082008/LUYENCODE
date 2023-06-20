#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=sqrt(n);i++) ans+=i*(n/i-n/(i+1));
    for (ll i=1;i<=n/((ll)sqrt(n)+1);i++) ans+=(ll)n/i;
    cout<<ans;
}

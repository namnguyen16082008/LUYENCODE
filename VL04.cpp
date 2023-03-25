#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double n,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=n;i++)
        ans+=(double)1/i;
    cout<<fixed<<setprecision(4)<<ans;
}

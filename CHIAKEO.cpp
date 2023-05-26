#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++)
        if ((i+1)*3>n) break;
        else ans+=((n-i-1)/2-i);
    cout<<ans;
}

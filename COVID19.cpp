#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=2021;
ll n,k,x=1,ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>n;
    if (k==0 && n!=0) cout<<0;
    else{
        for (ll i=1;i<n;i++){
            x=(x*k)%MOD;
            ans=(ans+x)%MOD;
        }
        cout<<ans;
    }
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ans=(n+1)*(n+2)/2;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans-=a;
    }
    cout<<ans;
}

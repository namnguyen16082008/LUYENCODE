#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,ans;
void Solve(){
    cin>>n;
    ans=0;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            ans=i;
            while (n%i==0) n/=i;
        }
    cout<<max(ans,n)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

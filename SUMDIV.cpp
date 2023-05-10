#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
void Solve(){
    cin>>n;
    ll s=0;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0){
            s+=i;
            if (i!=n/i) s+=n/i;
        }
    cout<<s<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

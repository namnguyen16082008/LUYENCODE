#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000001;
ll n,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n-2;i++)
        if (a[i]-a[i+1]!=a[i+1]-a[i+2]){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}

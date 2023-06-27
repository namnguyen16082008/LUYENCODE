#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,ans=0,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (a[i-1]%2==1 && i>1){
            ans++;
            a[i]--;
        }
        ans+=a[i]/2;
    }
    cout<<ans;
}

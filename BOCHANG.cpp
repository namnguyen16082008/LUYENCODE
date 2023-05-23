#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],ans=1e+18,x=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++){
        x+=a[i];
        if (x==n-i-1) ans=min(ans,n-i-1);
        else if (x>n-i-1) ans=min(ans,n-i);
        if (ans!=1e+18){
            cout<<ans;
            return 0;
        }
    }
    cout<<ans;
}

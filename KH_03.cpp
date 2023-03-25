#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n,a[N],ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++){
        ll d=0;
        for (ll j=i;j<=n;j++)
            if (abs(a[i]-a[j])>1){
                ans=max(ans,d);
                break;
            }
            else d++;
        ans=max(ans,d);
    }
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=300005;
ll n,k,d=1,x=0,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        x+=(a[i]%k==0);
        while (x>1){
            x-=(a[d]%k==0);
            d++;
        }
        ans+=i-d+1;
    }
    cout<<ans;
}


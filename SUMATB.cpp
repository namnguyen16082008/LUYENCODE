#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100001;
ll n,t,a[N],x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    cin>>t;
    while (t--){
        cin>>x>>y;
        cout<<a[y]-a[x-1]<<endl;
    }
}

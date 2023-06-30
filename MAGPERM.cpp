#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    if (!k){
        for (ll i=1;i<=n;i++) cout<<i<<" ";
        return 0;
    }
    if (n%(k*2)!=0){
        cout<<-1;
        return 0;
    }
    for (ll i=1;i<=n;i++)
        (i%(k*2)+k*2*(i%(k*2)==0)>k) ? cout<<i-k<<" " : cout<<i+k<<" ";
}

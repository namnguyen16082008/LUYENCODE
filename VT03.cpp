#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,m=-1e+18,ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=0;i<n;i++){
        cin>>x;
        if (m<=x){
            m=x;
            ans=i;
        }
    }
    cout<<ans;
}

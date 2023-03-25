#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,ans=-1e+18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n--){
        cin>>x;
        ans=max(ans,x);
    }
    cout<<ans;
}

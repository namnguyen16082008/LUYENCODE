#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x=2,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (x<=n){
        ans+=n/x;
        x*=2;
    }
    cout<<ans;
}

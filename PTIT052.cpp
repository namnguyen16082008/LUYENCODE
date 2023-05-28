#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,x=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    while (n>0){
        ans+=n;
        x+=n;
        n=x/k;
        x%=k;

    }
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n>0){
        ans+=n/5;
        n/=5;
    }
    cout<<ans;
}

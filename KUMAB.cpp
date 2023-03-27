#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n>0){
        ans+=n;
        x+=n%10;
        n=n/10*3;
        if (x>=10){
            n+=x/10*3;
            x%=10;
        }
    }
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    while (a*2<=b){
        a*=2;
        ans++;
    }
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n==0){
        cout<<"INF";
        return 0;
    }
    if (n<0) n=0-n;
    for (ll i=n;i>=1;i--)
        if (n%i==0) cout<<i<<" ";
}

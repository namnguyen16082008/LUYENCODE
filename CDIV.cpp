#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll l,r,a,b;
ll Find(ll x){
    return r/x-(l-1)/x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>r>>a>>b;
    cout<<Find(a)+Find(b)-Find(a*b/__gcd(a,b));
}

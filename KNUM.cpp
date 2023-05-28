#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll Get(ll x, ll n){
    ostringstream d;
    d<<x;
    string s=d.str();
    return int(s[n-1])-48;
}
void Solve(){
    for (ll i=1;i<=10;i++)
        if (n<=(pow(10,i-1)*9)*i){
            ll x=pow(10,i-1)+n/i-1;
            n%=i;
            if (n==0) cout<<x%10<<endl;
            else cout<<Get(x+1,n)<<endl;
            break;
        }
        else n-=((pow(10,i-1)*9)*i);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>n) Solve();
}

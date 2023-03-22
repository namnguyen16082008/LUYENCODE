#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    x=(ll)sqrt(a);
    (x*x==a) ? cout<<(ll)sqrt(b)-x+1 : cout<<(ll)sqrt(b)-x;
}

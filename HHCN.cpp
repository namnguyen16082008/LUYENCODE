#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
double a,b,c,x,y,z;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    y=sqrt(a*b/c);
    x=a/y;
    z=b/y;
    cout<<((ll)(x+y+z)*4)%MOD;
}

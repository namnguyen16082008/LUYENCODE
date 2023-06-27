#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,x=0,y=0,z=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        x+=a<0;
        y+=a>0;
        z+=a==0;
    }
    (z>0) ? cout<<-1 : cout<<min(x,y);
}

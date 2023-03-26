#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,n,x=0,y=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>n;
    while (x<n && y<n){
        x+=a;y+=b;
        if (x>n) x%=n;
        if (y>n) y%=n;
    }
    if (x==n && y==n) cout<<0;
    else if (x==n) cout<<1;
    else cout<<-1;
}

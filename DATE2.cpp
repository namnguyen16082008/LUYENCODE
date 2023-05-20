#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,y,z;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    z=n%60;n=(n-z)/60;y=n%60;x=(n-y)/60;
    (x<10) ? cout<<0<<x<<':' : cout<<x<<':';
    (y<10) ? cout<<0<<y<<':' : cout<<y<<':';
    (z<10) ? cout<<0<<z : cout<<z;
}

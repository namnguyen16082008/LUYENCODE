#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,xa=0,xb=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=1;i<=sqrt(a);i++)
        if (a%i==0 && a/i!=i) xa+=(i+a/i);
        else if (a%i==0) xa+=i;
    for (ll i=1;i<=sqrt(b);i++)
        if (b%i==0 && b/i!=i) xb+=(i+b/i);
        else if (b%i==0) xb+=i;
    (xa-a==b || xb-b==a) ? cout<<"YES" : cout<<"NO";
}

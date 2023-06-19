#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    x=sqrt(n*2);
    y=sqrt(n);
    ((x*(x+1)/2==n && x>=2) || (y*y==n) && y>=2) ? cout<<"YES" : cout<<"NO";
}


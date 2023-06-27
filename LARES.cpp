#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>k;
    if (a%2){a--;k--;}
    if (a>2*b){k-=(a-2*b);a=2*b;}
    if (b*2>a){k-=(b-a/2);b=a/2;}
    (k<=0) ? cout<<b : cout<<b-(k+2)/3;
}

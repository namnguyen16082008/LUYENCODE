#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    x=(ll)sqrt(n);
    (x*x==n) ? cout<<"YES" : cout<<"NO";
}

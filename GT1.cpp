#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll Gt(ll n){
    if (n==0) return 1;
    return Gt(n-1)*n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<Gt(n);
}

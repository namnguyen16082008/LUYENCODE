#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    cout<<1*(k<n)<<" "<<max(2*k*(3*k<=n),(n-k)*(3*k>n));
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    (k%2==1) ? cout<<(n/k)*(n/k)*(n/k) : cout<<(n/k)*(n/k)*(n/k)+((n-k/2+k)/k)*((n-k/2+k)/k)*((n-k/2+k)/k);
}

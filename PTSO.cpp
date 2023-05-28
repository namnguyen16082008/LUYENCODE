#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            while (n%i==0 && n!=i){
                n/=i;
                cout<<i<<'*';
            }
        }
    cout<<n;
}

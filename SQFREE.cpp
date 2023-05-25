#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=1e+6;i++)
        if (n%i==0){
            if (n%(i*i)==0){
                cout<<"YES";
                return 0;
            }
            n/=i;
        }
    if (n>1){
        x=(ll)sqrt(n);
        (x*x==n) ? cout<<"YES" : cout<<"NO";
        return 0;
    }
    cout<<"NO";
}

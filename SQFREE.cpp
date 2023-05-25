#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x;
ll Pr(ll n){
    if (n<=3) return n>1;
    if (n%2==0 || n%3==0) return 0;
    ll i=5;
    while (i*i<=n){
        if (n%i==0 || n%(i+2)==0) return 0;
        i+=6;
    }
    return 1;
}
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
        if (Pr(n)==1){
            cout<<"NO";
            return 0;
        }
        else{
            x=(ll)sqrt(n);
            (x*x==n) ? cout<<"YES" : cout<<"NO";
            return 0;
        }
    }
    cout<<"NO";
}

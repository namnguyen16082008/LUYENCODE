#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n<2){
        cout<<"NO";
        return 0;
    }
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}

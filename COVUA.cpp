#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        for (ll j=1;j<=n;j++)
            ((i+j)%2==0) ? cout<<"W" : cout<<"B";
        cout<<endl;
    }
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=0;i<=30;i++)
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
}

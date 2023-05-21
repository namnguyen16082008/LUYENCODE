#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a=0,d=0;
string x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (x[0]=='-') a++;
        else if (x!="0") d++;
    }
    cout<<a<<" "<<d;
}

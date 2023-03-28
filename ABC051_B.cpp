#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll k,s,d=0,t=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>s;
    for (ll i=0;i<=min(k,s);i++)
        if (s-i<=2*k)
            d+=(min(k,s-i)-max(t,s-i-k)+1);
    cout<<d;
}

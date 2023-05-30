#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    cout<<__gcd(a,b)<<endl<<a/__gcd(a,b)<<" "<<b/__gcd(a,b);
}

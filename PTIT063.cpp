#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll l,r;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>r;
    cout<<(ll)sqrt(r-1)-(ll)sqrt(l);
}

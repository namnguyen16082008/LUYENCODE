#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n%4==0) cout<<0;
    else if (n%4==2) cout<<1;
    else cout<<2;
}

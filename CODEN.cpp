#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cout<<(n/2+n%2)*(m/2+m%2);
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>k;
    (max(a,max(b,c))-min(a,min(b,c))<=k) ? cout<<"Yes" : cout<<"No";
}

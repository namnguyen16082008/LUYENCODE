#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll k,n,a,b,c,t=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>n>>a>>b>>c;
    (k==1) ? cout<<max(t,a+b+c-2*n) : cout<<min(a,min(b,c));
}

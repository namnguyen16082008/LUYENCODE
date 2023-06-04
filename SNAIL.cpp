#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,v,t=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>v;
    cout<<max(t,(v+a-2*b-1)/(a-b));
}

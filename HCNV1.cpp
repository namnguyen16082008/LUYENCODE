#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,d,e,f;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>d>>e>>f;
    (e>min(a,c) && e<max(a,c) && f>min(b,d) && f<max(b,d)) ? cout<<"YES" : cout<<"NO";
}

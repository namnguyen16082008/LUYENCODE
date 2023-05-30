#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c;
void End(ll a, ll b){
    if (a<b) cout<<'<';
    else if (a>b) cout<<'>';
    else if (a==b) cout<<'=';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if (c%2==0) End(abs(a),abs(b));
    else End(a,b);
}

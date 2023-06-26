#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=8100000000;
ll n,x,y,z;
vector <ll> v;
void Build(){
    x=1;
    for (ll i=0;;i++){
        if (i) x*=2;
        y=1;
        for (ll j=0;;j++){
            if (j) y*=3;
            z=1;
            for (ll k=0;;k++){
                if (k) z*=5;
                if (x+y+z==3);
                else if (x<=inf/y/z) v.push_back(x*y*z);
                else break;
            }
            if (x>inf/y) break;
        }
        if (x>inf) break;
    }
    sort(v.begin(),v.end());
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>n;
    cout<<v[n-1];
}

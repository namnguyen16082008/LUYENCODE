#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a0,a1,a2,b0,b1,b2,x1,x2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a0>>a1>>a2>>b0>>b1>>b2;
    x1=(a0>b0)+(a1>b1)+(a2>b2);
    x2=(a0<b0)+(a1<b1)+(a2<b2);
    cout<<x1<<" "<<x2;
}

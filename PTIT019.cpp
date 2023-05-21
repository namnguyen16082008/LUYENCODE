#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[3];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3,greater<ll>());
    cout<<a[0]<<" "<<a[1]<<" "<<a[2];
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+4);
    if (a[2]-a[1]==a[3]-a[2]) cout<<a[3]+(a[2]-a[1]);
    else if (a[2]-a[1]==2*(a[3]-a[2])) cout<<a[2]-(a[3]-a[2]);
    else cout<<a[3]-(a[2]-a[1]);
}

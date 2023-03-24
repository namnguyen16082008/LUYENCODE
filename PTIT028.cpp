#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a;
ll x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    x=round(a);
    if (x<a) cout<<x<<" "<<x+1;
    else if (x>a) cout<<x-1<<" "<<x;
    else cout<<a<<" "<<a+1;
}

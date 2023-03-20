#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if (a%2==1) a++;
    if (b%2==1) b--;
    if (a<=b) cout<<(a+b)*((b-a)/2+1)/2;
    else cout<<0;
}

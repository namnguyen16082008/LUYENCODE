#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    (n%2==0) ? cout<<n*3+1-n*3/2 : cout<<0-(n*3+1)/2;
}

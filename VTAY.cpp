#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cin>>n;
    ((n/7)%2==1) ? cout<<n%7<<" "<<7-n%7 : cout<<7-n%7<<" "<<n%7;
}

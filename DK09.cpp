#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n<=0 || n>100000) cout<<"INVALID";
    else if (n%400==0 || (n%4==0 && n%100!=0)) cout<<"YES";
    else cout<<"NO";
}

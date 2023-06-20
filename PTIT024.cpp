#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll Pr(ll n){
    if (n<=3) return n>1;
    if (n%2==0 || n%3==0) return 0;
    for (ll i=5;i*i<=n;i+=6)
        if (n%i==0 || n%(i+2)==0) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        (Pr(i)) ? cout<<'*' : cout<<s[i];
}

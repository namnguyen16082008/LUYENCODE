#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>n;
    for (ll i=0;i<s.size();i++) cout<<char((int(s[i])-70-n)%26+96);
}

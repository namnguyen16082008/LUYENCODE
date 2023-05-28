#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    if (s[0]=='?') s[0]='a';
    if (s[s.size()-1]=='?') s[s.size()-1]='b';
    cout<<s[s.size()-1]-s[0];
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size()/2;i++)
        swap(s[i],s[s.size()-i-1]);
    while (s[0]=='0' && s.size()>1) s.erase(0,1);
    cout<<s;
}

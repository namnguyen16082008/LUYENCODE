#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll d=1;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=1;i<s.size();i++)
        if (s[i]!=s[i-1]){
            cout<<d<<s[i-1];
            d=1;
        }
        else d++;
    cout<<d<<s[s.size()-1];
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll ans=1;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    while (s[0]==' ') s.erase(0,1);
    while (s[s.size()-1]==' ') s.erase(s.size()-1,1);
    if (s.size()!=0){
        for (ll i=0;i<s.size()-1;i++)
            ans+=(s[i]!=' ' && s[i+1]==' ');
        cout<<ans;
    }
    else cout<<0;
}

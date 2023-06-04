#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll ans=1;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline (cin,s);
    for (int i=0;i<s.size()-1;i++)
        ans+=s[i]==' ' && s[i+1]<='9';
   	cout<<ans;
}

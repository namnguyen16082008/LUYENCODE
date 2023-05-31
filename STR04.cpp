#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
unordered_map <char,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline (cin,s);
    for (ll i=0;i<s.size();i++)
        if ((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z')) mp[s[i]]++;
        else if (s[i]>='A' && s[i]<='Z') mp[s[i]+32]++;
    for (char i='0';i<='9';i++)
        if (mp[i]!=0) cout<<i<<" "<<mp[i]<<endl;
    for (char i='a';i<='z';i++)
        if (mp[i]!=0) cout<<i<<" "<<mp[i]<<endl;
}

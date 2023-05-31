#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
char k;
string s;
unordered_map <char,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    for (ll i=0;i<s.size();i++) mp[s[i]]++;
    cin>>t;
    while (t--){
        cin>>k;
        (k>='A' && k<='Z') ? cout<<mp[k]+mp[k+32]<<endl : cout<<mp[k]+mp[k-32]<<endl;
    }
}

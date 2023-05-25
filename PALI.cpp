#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
ll Check(string s){
    for (ll i=0;i<(s.size()+1)/2;i++)
        if (s[i]!=s[s.size()-i-1]) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n--){
        cin>>s;
        if (Check(s)==1) cout<<s<<" ";
    }
}


#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll n=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]=='C'){
            n++;
            ans+=n;
        }
        else n=0;
    cout<<ans;
}


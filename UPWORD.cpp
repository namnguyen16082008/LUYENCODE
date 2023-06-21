#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll d=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    s+='?';
    for (ll i=0;i<s.size();i++)
        if (s[i]>='A' && s[i]<='Z') d=1;
        else{
            ans+=d;
            d=0;
        }
    cout<<ans;
}

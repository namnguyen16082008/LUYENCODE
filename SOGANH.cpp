#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll Check(ll x){
    for (ll i=0;i<x;i++)
        if (s[i]!=s[i+s.size()-x])
            return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=s.size()/2;i>=1;i--)
        if (Check(i)==1){
            cout<<i;
            return 0;
        }
    cout<<-1;
}

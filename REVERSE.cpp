#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll S=200005;
string s;
ll n,a,x[S]={
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        x[a-1]++;
        x[s.size()-a+1]--;
    }
    for (ll i=1;i<s.size();i++) x[i]+=x[i-1];
    for (ll i=0;i<s.size();i++)
        (x[i]%2==0) ? cout<<s[i] : cout<<s[s.size()-i-1];
}

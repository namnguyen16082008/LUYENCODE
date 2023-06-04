#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll a[305]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline (cin,s);
    for (ll i=0;i<s.size();i++)
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) a[int(s[i])]++;
    for (ll i=1;i<=300;i++)
        if (a[i]!=0) cout<<char(i)<<':'<<a[i]<<endl;
}

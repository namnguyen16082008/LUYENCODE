#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
void Solve(){
    getline (cin,s);
    while (s[0]==' ') s.erase(0,1);
    while (s[s.size()-1]==' ') s.erase(s.size()-1,1);
    for (int i=s.size()-1;i>0;i--)
        if (s[i]==' ' && s[i-1]==' ') s.erase(i,1);
    cout<<s<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin.ignore();
    while (n--) Solve();
}

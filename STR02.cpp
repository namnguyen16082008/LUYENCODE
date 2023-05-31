#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string s;
void Solve(){
    getline (cin,s);
    for (ll i=0;i<s.size();i++)
        if (s[i]>='A' && s[i]<='Z') s[i]+=32;
    for (ll i=0;i<s.size();i++)
        if (s[i]>='a' && s[i]<='z'){
            s[i]-=32;
            for (ll j=i+1;j<s.size();j++)
                if (s[j-1]==' ') s[j]-=32;
            break;
        }
    cout<<s<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>t;
	cin.ignore();
	while (t--) Solve();
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string s;
unordered_map <char,ll> mp;
ll Cal(ll i, ll j){
    if (i==j) return mp[s[i]];
    ll n=0;
    for (ll o=j;o>=i;o--)
        if (s[o]>='A' && s[o]<='Z') n+=mp[s[o]];
        else if (s[o]==')'){
            ll d=0;
            for (ll o1=o;o1>=i;o1--)
                if (s[o1]==')') d++;
                else if (s[o1]=='('){
                    d--;
                    if (d==0){
                        n+=Cal(o1+1,o-1);
                        o=o1;
                        break;
                    }
                }
        }
        else if (s[o]>='2' && s[o]<='9'){
            if (s[o-1]!=')'){
                n+=mp[s[o-1]]*(int(s[o])-48);
                o--;
            }
            else{
                ll d=0;
                for (ll o1=o-1;o1>=i;o1--)
                    if (s[o1]==')') d++;
                    else if (s[o1]=='('){
                        d--;
                        if (d==0){
                            n+=Cal(o1+1,o-2)*(int(s[o])-48);
                            o=o1;
                            break;
                        }
                    }
            }
        }
    return n;
}
void Solve(){
    cin>>s;
    cout<<Cal(0,s.size()-1)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mp['H']=1,mp['C']=12,mp['O']=16;
    cin>>t;
    while (t--) Solve();
}

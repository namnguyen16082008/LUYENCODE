#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,t;
char x,y;
string s="";
stack <tuple<ll,char,char>> st;
unordered_map <char,char> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>t;
        if (t==1){
            cin>>x;
            s+=x;
        }
        else if (t==2){
            cin>>x>>y;
            st.emplace(s.size()-1,x,y);
        }
    }
    for (char i='a';i<='z';i++) mp[i]=i;
    for (ll i=s.size()-1;i>=0;i--){
        if (!st.empty()){
            while (i==get<0>(st.top())){
                mp[get<1>(st.top())]=mp[get<2>(st.top())];
                st.pop();
                if (st.empty()) break;
            }
        }
        s[i]=mp[s[i]];
    }
    cout<<s;
}

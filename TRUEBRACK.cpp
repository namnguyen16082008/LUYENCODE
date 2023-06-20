#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
stack <char> st;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
        else{
            if (st.empty() || st.top()==')' || st.top()==']' || st.top()=='}' || (s[i]==')' && st.top()!='(') || (s[i]==']' && st.top()!='[') || (s[i]=='}' && st.top()!='{')){
                cout<<"No";
                return 0;
            }
            else st.pop();

        }
    (st.empty()) ? cout<<"Yes" : cout<<"No";
}

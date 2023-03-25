#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
stack <ll> st;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]=='(') st.push(i+1);
        else{
            cout<<st.top()<<" "<<i+1<<endl;
            st.pop();
        }
}

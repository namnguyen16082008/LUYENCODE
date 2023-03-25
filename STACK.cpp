#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,x,y;
stack <ll> st;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--){
        cin>>x;
        if (x==1){
            cin>>y;
            st.push(y);
        }
        else if (x==2){
            if (!st.empty()) st.pop();
        }
        else if (x==3)
            (st.empty()) ? cout<<"Empty!"<<endl : cout<<st.top()<<endl;
    }
}

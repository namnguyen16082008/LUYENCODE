#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,x,y;
queue <ll> qe;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    for (ll i=1;i<=t;i++){
        cin>>x;
        if (x==1){
            cin>>y;
            qe.push(y);
        }
        else if (x==2){
            if (!qe.empty()) qe.pop();
        }
        else{
            (!qe.empty()) ? cout<<qe.front()<<endl : cout<<"Empty!"<<endl;
        }
    }
}

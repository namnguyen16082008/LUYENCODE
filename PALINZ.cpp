#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll q,x,y;
void Solve(){
    cin>>x>>y;
    while (x<y){
        if (s[x-1]!=s[y-1]){
            cout<<"NO"<<endl;
            return;
        }
        x++;
        y--;
    }
    cout<<"YES"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>q;
    while (q--) Solve();
}

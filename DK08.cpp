#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char s;
float x,a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>s>>b;
    if (s=='+') x=a+b;
    else if (s=='-') x=a-b;
    else if (s=='*') x=a*b;
    else if (s=='/'){
        if (b==0){
            cout<<"Math Error";
            return 0;
        }
        x=a/b;
    }
    cout<<setprecision(2)<<fixed<<x;
    return 0;
}

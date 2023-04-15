#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a,b,c,x,y,z=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if (a==0){
        if (b==0 && c==0) cout<<"INF";
        else if (b==0 && c!=0) cout<<"NO";
        else if (b!=0 && c==0) cout<<fixed<<setprecision(2)<<z;
        else cout<<fixed<<setprecision(2)<<-c/b;
    }
    else if (a!=0){
        if (b*b<4*a*c) cout<<"NO";
        else if (b*b==4*a*c) cout<<fixed<<setprecision(2)<<-b/2/a;
        else{
            x=(-b-sqrt(b*b-4*a*c))/2/a;
            y=(-b+sqrt(b*b-4*a*c))/2/a;
            cout<<fixed<<setprecision(2)<<min(x,y)<<" "<<max(x,y);
        }
    }
}

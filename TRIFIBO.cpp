#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll q,x,a[150];
void Build(){
    a[0]=0,a[1]=1,a[2]=1;
    for (ll i=3;i<=127;i++)
        if (i%2==1) a[i]=a[i-1]+a[i-2];
        else if (i%2==0) a[i]=a[i-1]-1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>q;
    while (q--){
        cin>>x;
        cout<<a[x]<<endl;
    }
}

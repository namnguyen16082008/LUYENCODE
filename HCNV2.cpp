#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll xa,ya,xb,yb,xc,yc,xd,yd;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>xa>>ya>>xb>>yb>>xc>>yc>>xd>>yd;
    if (max(xa,xb)<=min(xc,xd) || min(xa,xb)>=max(xc,xd) || max(ya,yb)<=min(yc,yd) || min(ya,yb)>=max(yc,yd)) cout<<0;
    else if (max(xa,xb)<=max(xc,xd) && min(xa,xb)>=min(xc,xd) && max(ya,yb)<=max(yc,yd) && min(ya,yb)>=min(yc,yd)) cout<<abs(xa-xb)*abs(ya-yb);
    else if (max(xa,xb)>=max(xc,xd) && min(xa,xb)<=min(xc,xd) && max(ya,yb)>=max(yc,yd) && min(ya,yb)<=min(yc,yd)) cout<<abs(xc-xd)*abs(yc-yd);
    else if (max(xa,xb)<=max(xc,xd) && min(xa,xb)<=min(xc,xd) && max(ya,yb)<=max(yc,yd) && min(ya,yb)>=min(yc,yd)) cout<<(max(xa,xb)-min(xc,xd))*abs(ya-yb);
    else if (max(xa,xb)<=max(xc,xd) && min(xa,xb)>=min(xc,xd) && max(ya,yb)>=max(yc,yd) && min(ya,yb)>=min(yc,yd)) cout<<(max(yc,yd)-min(ya,yb))*abs(xa-xb);
    else if (max(xa,xb)>=max(xc,xd) && min(xa,xb)>=min(xc,xd) && max(ya,yb)<=max(yc,yd) && min(ya,yb)>=min(yc,yd)) cout<<(max(xc,xd)-min(xa,xb))*abs(ya-yb);
    else if (max(xa,xb)<=max(xc,xd) && min(xa,xb)>=min(xc,xd) && max(ya,yb)<=max(yc,yd) && min(ya,yb)<=min(yc,yd)) cout<<(max(ya,yb)-min(yc,yd))*abs(xa-xb);
    else if (max(xc,xd)<=max(xa,xb) && min(xc,xd)<=min(xa,xb) && max(yc,yd)<=max(ya,yb) && min(yc,yd)>=min(ya,yb)) cout<<(max(xc,xd)-min(xa,xb))*abs(yc-yd);
    else if (max(xc,xd)<=max(xa,xb) && min(xc,xd)>=min(xa,xb) && max(yc,yd)>=max(ya,yb) && min(yc,yd)>=min(ya,yb)) cout<<(max(ya,yb)-min(yc,yd))*abs(xc-xd);
    else if (max(xc,xd)>=max(xa,xb) && min(xc,xd)>=min(xa,xb) && max(yc,yd)<=max(ya,yb) && min(yc,yd)>=min(ya,yb)) cout<<(max(xa,xb)-min(xc,xd))*abs(yc-yd);
    else if (max(xc,xd)<=max(xa,xb) && min(xc,xd)>=min(xa,xb) && max(yc,yd)<=max(ya,yb) && min(yc,yd)<=min(ya,yb)) cout<<(max(yc,yd)-min(ya,yb))*abs(xc-xd);
    else if (max(xa,xb)<=max(xc,xd) && min(xa,xb)<=min(xc,xd) && max(ya,yb)>=max(yc,yd) && min(ya,yb)>=min(yc,yd)) cout<<(max(xa,xb)-min(xc,xd))*(max(yc,yd)-min(ya,yb));
    else if (max(xa,xb)>=max(xc,xd) && min(xa,xb)>=min(xc,xd) && max(ya,yb)>=max(yc,yd) && min(ya,yb)>=min(yc,yd)) cout<<(max(xc,xd)-min(xa,xb))*(max(yc,yd)-min(ya,yb));
    else if (max(xa,xb)>=max(xc,xd) && min(xa,xb)>=min(xc,xd) && max(ya,yb)<=max(yc,yd) && min(ya,yb)<=min(yc,yd)) cout<<(max(xc,xd)-min(xa,xb))*(max(ya,yb)-min(yc,yd));
    else if (max(xa,xb)<=max(xc,xd) && min(xa,xb)<=min(xc,xd) && max(ya,yb)<=max(yc,yd) && min(ya,yb)<=min(yc,yd)) cout<<(max(xa,xb)-min(xc,xd))*(max(ya,yb)-min(yc,yd));
    else cout<<min(abs(xa-xb),abs(xc-xd))*min(abs(ya-yb),abs(yc-yd));
}

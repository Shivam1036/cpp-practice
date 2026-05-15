#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,r1,r2,d;
    cout<<"ensure your equation must be in the form ax^2 + bx + c=0\n";
    cout<<"entr the coefficient of x^2 ";
    cin>>a;
     cout<<"entr the coefficient of x ";
    cin>>b;
     cout<<"entr the constant term ";
    cin>>c;
d=(b*b)-(4*a*c);
if(d>0){
cout<<"real and distict roots";
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<"the roots are  "<<r1<<" and "<<r2;
}
else if(d=0){
    cout<<"real and equal roots";
r1=(-b+sqrt(d))/(2*a);
r2=(-b+sqrt(d))/(2*a);
cout << "roots r1=r2= "<<r1;

    
}
}
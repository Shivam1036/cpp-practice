#include<iostream>
//#include<vector>
using namespace std;

int main(){
 int b;
 double ans=1,a;
 cout<<"enter base ";
 cin>>a;
 cout<<"enter power ";
 cin>>b;
//  if(b==0){
    // ans=1;
//  }

 if(b<0){
    a=1/a;
    b=(-1)*b;
  }
 while(b>0){
    if(b%2==1){
        ans*=a;
    }
    a*=a;
    b/=2;
 }
 cout<<double(ans);


    return 0;
}
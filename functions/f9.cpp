#include<iostream>
#include<math.h>
using namespace std;

void binTOdeci(int n){
int num=0,digit;
int i=0;
while(n!=0){
    int digit=n%10;
    if(digit==1){
        num=num+pow(2,i);
    }
   n=n/10;
   i++;
}
cout<<num;
}

int main(){
    int n;
    cout<<"enter binary number ";
    cin>>n;
    cout<<"the decimal number is ";
    binTOdeci(n);

}
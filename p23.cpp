#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,number=0,i=0;
    cout<<"enter a binary number";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            number+=pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"the decimal number is "<<number;
}
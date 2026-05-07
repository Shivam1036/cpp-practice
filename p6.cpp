#include<iostream>
using namespace std;
int main(){
    int t,h,m,sec;
    cout<<"entr time in seconds";
    cin>>t;
    h=t/3600;
    m=t%3600/60;
    sec=(t%3600)%60;
    cout<<t<<"seconds="<<h<<"hours"<<m<<"minutes"<<sec<<"seconds";
}
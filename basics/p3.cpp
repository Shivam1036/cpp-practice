#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lower case";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"upper case";
    }
    else if(ch>='0' && ch<='9'){
cout<<"numeric";
    }
    else{
        cout<<"the entered character is a special character";
    }
}
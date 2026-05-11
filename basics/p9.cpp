#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character  ";
    cin>>ch;
    if(ch== 'a' || ch== 'e'|| ch== 'i' || ch== 'o'||ch== 'u' ||
        ch== 'A'|| ch== 'E'|| ch== 'I' || ch== 'O'||ch== 'U')
    cout<<"vowel";
    else if ((ch<'A'||ch>'Z')&&(ch<'a'||ch>'z'))
    {
        cout<<"not an alphabet";
    }
    else{
        cout<<"  consonent";
    }
    
    
    
}
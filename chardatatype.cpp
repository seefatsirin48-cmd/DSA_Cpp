#include<iostream>
using namespace std;
int main(){
    // A BC D..
    // a b  c d e ..
    //! @ # $ % ^ &...
    //1 2 3 4 5 6 ..
    char ch ='1';
    cout<<ch<<endl;
    //Ascii values
    char x = 'A';
    cout<<(int)x<<endl;
    char y ='a';
    int ascii=(int)y;//explicit typecasting
    cout<<ascii<<endl;

    char z='1';
    ascii=z; //implicit typecasting
    cout<<ascii<<endl;
}
    

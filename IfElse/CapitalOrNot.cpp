#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter a Alphabet:";
    cin>>ch;
    int x =(int)ch;
    if(x>=65 && x<=90){
        cout<<"Capital Alphabet";
    }
    else{
        cout<<"Not capital alphabet";
    }
}
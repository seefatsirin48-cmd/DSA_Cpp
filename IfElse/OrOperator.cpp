#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter a number:";
    cin>>n;
    if((n%3==0) || (n%5==0)){
        cout<<"Number is divisible by 3 or 5";
    }
    else{
        cout<<"Number is neither divisible by 3 nor by 5";
    }
}
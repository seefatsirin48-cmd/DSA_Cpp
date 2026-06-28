#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a positive integer:";
    cin>>n;
    if((n%5==0) && (n%3==0)){
        cout<<"Kartikey";
    }
    else if(n%3==0){
        cout<<"Sakshi";
    }
    else if(n%5==0){
        cout<<"Seefat";
    }
    else{
        cout<<"Aman";
    }
}
#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter sides of triangle:";
    cin>>a>>b>>c;
    if((a+b>c) && (a+c>b) && (b+c>a))
    cout<<"yes these are sides of triangle";
    else 
    cout<<"Not sides of triangle";
}
#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter three positive number:";
    cin>>a>>b>>c;
    if(a<=b && a<=c)
    cout<<a<<" is least";
    else if(b<=a && b<=c)
    cout<<b<<" is least";
    else
    cout<<c<<" is least";
}

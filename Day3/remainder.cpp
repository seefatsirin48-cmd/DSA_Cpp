#include<iostream>
using namespace std;
int main (){
    int divisor;
    int dividend;
    int Qoutient,r;
    cout<<"Enter divisor:";
    cin>>divisor;
    cout<<"Enter dividend";
    cin>>dividend;
    cout<<"Qoutient:";
    cin>>Qoutient;
    r=dividend-(divisor*Qoutient);
    cout<<"Remainder is :"<<r;
}
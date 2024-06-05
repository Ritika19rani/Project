#include<iostream>
using namespace std;

int main(){
    float a,b;
    char an_operator;
    cout<<"Welcome"<<endl;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<endl;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<endl;
    cout<<"Enter an operator(+,-,*,/):";
    cin>>an_operator;
    switch (an_operator)
    {
    case '+':
    cout<<"sum is:"<<a+b<<endl;
        break;
    case '-':
    cout<<"difference is:"<<a-b<<endl;
    break;
    case '*':
    cout<<"product is:"<<a*b<<endl;
    break;
    cout<<"quotient is:"<<a/b<<endl;
    break;
    default:
    cout<<"sorry this operator will not work in it"<<endl;
        break;
    }
    cout<<"Thanku for using this calculator(by Ritika Rani)"<<endl;
    return 0;
}
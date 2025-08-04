#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;

    
    cout<<"Enter an operator(+ , _ , / , * , %):";
    char op;
    cin>>op;
    switch (op)
    {
        case '+':
        cout<<"Addition of two no.s is:"<<n1+n2;
        break;
        case '-':
        cout<<"subtraction of two no.s:"<<n1-n2;
        break;
        case '/':
        if(n2 != 0)
        {
            cout<<"Division of two no.s:"<<n1/n2;
        }else{
        cout<<"Error:it's undefined.";
        }
        break;
        case '*':
        cout<<"Multiplication of two no.s:"<<n1*n2;
        break;
        case '%':
        if(n2 != 0){
            cout<<"Modulus of two no.s"<<n1%n2;
        }
        else{
        cout<<"Error:it's undefined.";
        }
        break;
        default:
        cout<<"Error : Invalid operator.";
        break;
    }
    
}
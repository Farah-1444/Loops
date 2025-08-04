#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"base is ";
    cin>>a;
    int b;
    cout<<"exponent is ";
    cin>>b;
    
    int power=1;
    for(int i=1; i<=b; i++)
    {
        power=power*a;
       
    }
     cout<<"power is "<<power;

}
#include<iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout<<"n1:";
    cin>>n1;
    cout<<"n2:";
    cin>>n2;
    cout<<"n3:";
    cin>>n3;
    if(n1>n2)
    {
        if(n1>n3){
            cout<<"max no.s is n1.";
        }
        else{
            cout<<"max no.s is n3.";
        }
    }
    else{
        if(n2>n3){
            cout<<"n2 is max no.s";
        }
        else{
            cout<<"n3 is max";
        }
    }
}
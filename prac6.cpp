#include<iostream>
using namespace std;
int main()
{
    int o1, o2;
    cout<<"o1:";
    cin>>o1;
    cout<<"o2:";
    cin>>o2;

    if(o1%o2==0){
        cout<<"it's an even number.";
    } 
    else {
        cout<<"it's an odd number.";
    }
}
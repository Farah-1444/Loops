#include<iostream>
using namespace std;
int main()
{
    int sp, cp;
    cout<<"Enter the sp:";
    cin>>sp;
    cout<<"Enter the cp:";
    cin>>cp;
    if(sp>cp){
        int Profit = sp - cp;
        cout<<"Your Profit is:"<<Profit<<endl;
    }
    else if(cp>sp)
    {
        int Loss=sp-cp;
        cout<<"Loss is:"<<Loss<<endl;
    }
    else{
        cout<<"No Profit oor loss";
    }
    return 0;
}
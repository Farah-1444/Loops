#include<iostream>
using  namespace std;
int main()
{
    int n1,n2;
    cout<<"n1:";
    cin>>n1;
    

    if((n1%5==0) || (n1%3==0))
    {
        cout<<"divible by 3 and 5.";
    } 
    else{
        cout<<"odd.";
    }
}
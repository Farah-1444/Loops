#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    int a=0;
    if(n==1)
    {
        cout<<"1 is neither prime, nor composite.";
    }
    else
    {
        for(i=2; i<=n-1; i++)
        {
            if(n%i==0){
            a=1;}
        }
    }
    if(a==0)
    {
        cout<<"it's Prime.";
    }
    else
    {
        cout<<"it's compositr.";
    }
}

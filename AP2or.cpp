#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cin>>n;
    int a=1;
    for(i=1; i<=n; i++)
    {
        cout<<a<<' ';
        a=a+2;
    }
} //to solve with new variable

int main()
{
    int i,n;
    cin>>n;
    for(i=1; i<=2*n-1; i=i+2)
    {
        cout<<i<<' ';
    }
} //solving Arithmetic progression using formulaa.
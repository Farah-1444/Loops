#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cin>>n;
    int a=3;
    for(i=1; i<=n; i++)
    {
        cout<<a<<' ';
        a=a*4;
    }
}
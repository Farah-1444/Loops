#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout<<"no.s:";
    cin>>n;

    for(i=1; i<=2*n-1; i=i+2)
    {
        cout<<i<<' ';
    }
}
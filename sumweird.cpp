#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int i;
    int sum=0;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0) sum=sum+i;
        else sum=sum-i;
    }
    cout<<"sum of this weirdo process is "<<sum;
}
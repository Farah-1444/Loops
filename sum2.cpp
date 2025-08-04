#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int sum=0;
    int ld;
    while(n!=0)
    {
    ld=n%10;
    sum=sum+ld;
    n=n/10;
    }
    cout<<"sumof these digits are "<<sum;
}
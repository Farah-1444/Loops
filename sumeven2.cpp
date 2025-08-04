#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int sum;
   
    while(n!=0)
    {
        int ld=n%10;
        if(ld%2==0)
        sum=sum+ld;
        n=n/10;
    }
    cout<<"sum of even no.s of these digits are "<<sum;
}
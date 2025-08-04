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
    if(ld%2!=0)
    sum=sum+ld;
    n=n/10;
}
cout<<"sum of the odd numbers in tis digits are "<<sum;

}
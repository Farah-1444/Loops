#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int sum=0;
    if(n%2==0)
    sum=-n/2;
    else if(n%2!=0)
    sum=-n/2+n;
    cout<<"sum of this weirdo by formula is "<<sum;
}

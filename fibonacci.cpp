#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1; i<=n-2; i++){
    sum = a+b;
    a = b;
    b = sum;
    cout<<sum<<endl;
    }
}
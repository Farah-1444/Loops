#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    
    int r=0;
    int ld;

    while(n!=0){
    ld=n%10;
    r=r*10;
    r=r+ld;
    n=n/10;
}
cout<<"reverse order is "<<r;
}
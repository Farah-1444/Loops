#include<iostream>
using namespace std;
int main()
{
    int n, org;
    for( int i=1; i<=500; i++){
        n=i;
        org=n;
    
    int fd=n/100;
    int md=(n/10)%10;
    int ld=n%10;

    
    int sum = (ld*ld*ld)+(md*md*md)+(fd*fd*fd);
    if(sum==org){     
    cout<<org<<" is an Armstong no "<<endl;  
}
    }
}
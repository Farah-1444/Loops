#include<iostream>
using namespace std;
int main()
{
    int n,org;

    for(int i=1; i<=2000; i++){
    n=i;
    org=n;

    int fd=n/100;
    int md=(n/10)%10;
    int ld=n%10;
    int sum=(fd*fd*fd)+(md*md*md)+(ld*ld*ld);
    
    if(sum==org){
    cout<<org<<" is armstrong."<<endl;
    }
    }
}


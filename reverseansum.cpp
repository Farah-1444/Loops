#include<iostream>
using namespace std;
int main()
{
    int num; 
    cout<<"num:";
    cin>>num;
    int sum;
    int orgnum=num;
    int ld;
    int rev=0;
    while(num!=0)
    {ld=num%10;
    rev=rev*10;
    rev=rev+ld;
    num=num/10;
} 
    sum=orgnum+rev;
    cout<<"rev is "<<rev<<endl;
    cout<<"sum of num and rev is "<<sum;
}
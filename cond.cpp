#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    cout<<"marks are:";
    if (marks>=60)
    { 
cout<<"better";
    }                                          //marKs>=50, print grade C//marKs>=60, print gradre B  //marKs>=80, print grade A 
    else if (marks>=70)                       
    {
cout<<"good";
    }   
    else if (marks>=80)
    {
cout<<"besttt";        
    }  
    return 0;     
}
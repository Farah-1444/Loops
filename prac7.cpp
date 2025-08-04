#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"age:";
    cin>>age;
    if(age<=12)
    {
        cout<<"He's a child.";
    }
    else if(age>=18)
    {
        cout<<"He's an adult.";
    }
    else{
        cout<<"He's a teenager.";
    }
    }
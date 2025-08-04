#include<iostream>
using namespace std;
int main()
{
    int x=4, y=3, z;
    z=x-- -y;
    cout<<x<<endl<<y<<endl<<z;  //x=3
                                //y=3
                                //z=1
}
#include<iostream>

using namespace std;
int main()
{
    bool rain;
    cin>>rain;
    cout<<"and ";
    if(rain){
        int indrive;
       cin>>indrive;
        
        if(indrive<=300){
        cout<<"i'll go by indrive";
        } 
        else{
        cout<<"i'll go by my own";
        } }
   
    else
    {
        cout<<"i'll go by moto";
    }

}
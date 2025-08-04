#include<iostream>
using namespace std;
int main()
{
    int n1 , n2, n3;
    cout<<n1<<n2<<n3<<endl;
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3)
    {
        cout<<"Maximun value is n1"<<endl;
    }else if(n2>n1 && n2>n3){
        cout<<"Maximun value is n2"<<endl;
    }else if(n3>n1 && n3>n2){
        cout<<"Maximum value is n3"<<endl;
    }else{
        cout<<"Can't determine";
    }
}
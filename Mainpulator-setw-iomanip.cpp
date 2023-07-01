#include<iostream>
#include<iomanip>
using namespace std;

int main()
    {
        int a=10,b=100,c=1000;
       
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b<<endl;
        cout<<"the value of c is:"<<c<<endl;

        cout<<"after using mainpulator-iomanip-setw"<<endl;

        cout<<"the value of a is:"<<setw(6)<<a<<endl;
        cout<<"the value of b is:"<<setw(6)<<b<<endl;
        cout<<"the value of c is:"<<setw(6)<<c<<endl;
        return 0;

    
    }
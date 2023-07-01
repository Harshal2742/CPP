#include<iostream>
using namespace std;

int main()
    {
        int a=100;
        const int b=200;
        cout<<"the value of a is:"<<a<<endl;
        a=50;
        cout<<"the value of a is:"<<a<<endl;

        cout<<"the value of b is:"<<b<<endl;//we can't change the value of constant,so error showing
        b=400;
        cout<<"the value of b is:"<<b<<endl;

    }
#include<iostream>
using namespace std;

int main(){
    int a=1234;
    int & b=a;

    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of b is:"<<b<<endl;
    
    return 0;
}
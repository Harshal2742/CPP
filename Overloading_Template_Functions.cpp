#include <iostream>
using namespace std;


float opration(float a,float b)
{
    return a + b;
}

template <class T>
T opration(T a,T b)
{
    return a * b;
}

void display()
{
    
}

int main()
{
    float h = 4.5, i = 6.5;
    cout << " The sum of float is " << opration(h,i)<<endl;
    cout << "The product is " << opration(5,4)<< endl;
    return 0;
}
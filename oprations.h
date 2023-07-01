#include <iostream>
using namespace std;

//file name must be save with .h extention

float opr(float a, float b, char c)
{
    cout << "Hello! You entered in coustom header file " << endl;
    if (c == '+')
    {
        return a + b;
    }
    if (c == '-')
    {
        return a - b;
    }
    if (c == '*')
    {
        return a * b;
    }
    if (c == '/')
    {
        return a / b;
    }
}

//should not write main() function otherwise after importing other programme throws error
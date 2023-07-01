#include <iostream>
using namespace std;

int n = 80;
int m = 60;

void function()
{
    n = 1000;     //this will update global variable
    int m = 6000; //this will not update global variable as this fuction has its own variable
}

int main()
{
    cout << "Value of n before calling function : " << n << endl;
    cout << "Value of m before calling function : " << m << endl;
    function();
    cout << "Value of n after calling function : " << n << endl;
    cout << "Value of m after calling function : " << m << endl;
    return 0;
}
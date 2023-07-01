#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
//function pointer is used to pass function as argument for anoter function
int main()
{
    int (*funcPtr)(int, int) = add;

    cout << add(5, 6) << endl;
    cout << funcPtr(7, 8) << endl;
    return 0;
}
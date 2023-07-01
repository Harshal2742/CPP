#include <iostream>
using namespace std;

int main()
{
    int a = 1234;
    int *ptr = &a;

    cout << "The addres of a is: " << &a << endl;
    cout << "The addres of a is: " << ptr << endl;
    cout << "The value at ptr is: " << *ptr << endl;

    *ptr = 2000;
    cout << "The value at a is: " << a << endl;

    return 0;
}
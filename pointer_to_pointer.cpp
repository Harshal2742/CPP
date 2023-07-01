#include <iostream>
using namespace std;

int main()
{
    int a = 784;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << "Value of a : " << a << endl;
    cout << "Value of a by simple pointer : " << *ptr1 << endl;
    cout << "Value of a by pointer to pointer : " << **ptr2 << endl;
    cout << "Address of a by &a : " << &a << endl;
    cout << "Address of a by ptr1 : " << ptr1 << endl;
    cout << "Address of a by *ptr2 : " << *ptr2 << endl;
    cout << "Address of ptr1 by &ptr1 : " << &ptr1 << endl;
    cout << "Address of ptr1 by  ptr2 : " << ptr2 << endl;
    return 0;
}

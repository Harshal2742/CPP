#include <iostream>
using namespace std;

void print(void *ptr, char type)
{
    // void pointer can hold address of any data type
    //to dereference void pointer we have to first typecast it into a data type of which it
    //hold value i.e. if it holds float we have type cast it into float and dereference it

    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    case 'f':
        cout << *((float *)ptr) << endl;
        break;
    }
}
int main()
{
    int a = 45;
    float b = 3.56;
    char c = 'z';

    print(&a, 'i');
    print(&b, 'f');
    print(&c, 'c');

    return 0;
}
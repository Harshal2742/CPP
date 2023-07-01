#include <iostream>
using namespace std;

int main()
{
    int num1[5] = {56, 67, 78, 89, 67};
    /* cout << marks << endl;     //Here we get address of first element in array
    cout << &marks[0] << endl; //By this way we also get address of first element in array
    cout << *marks << endl;    //As name of array store address of fisrst element here we dereference it */

    int num2[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> num2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Address of number " << *(num2 + i) << " : ";
        cout << num2 + i << endl;
    }

    return 0;
}
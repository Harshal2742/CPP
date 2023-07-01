#include <iostream>
using namespace std;
/* syntax for vector :
vector <type> variable (elements) */
// we can use inbuilt fuctions of vector by including header file <vector>

class vector
{
public:
    int *arr;
    int size;
    int d = 0;

    vector(int a)
    {
        size = a;
        arr = new int[size];
    }

    int dotproduct(vector &v)
    {
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 4;
    v1.arr[2] = 2;
    vector v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 3;
    int x = v1.dotproduct(v2);
    cout << x << endl;
    return 0;
}
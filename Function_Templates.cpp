#include <iostream>
using namespace std;

template <class T>
T large(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout << large<int>(6, 9) << " is greater" << endl;
    cout << large<char>('g', 't') << " is greater" << endl;
    cout << large<float>(3.56, 3.68) << " is greater" << endl;
    return 0;
}
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {23, 5, 6, 78, 12, 3, 1};

    sort(arr, arr + 7,greater<int>());

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
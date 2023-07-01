#include <iostream>
using namespace std;

int main()
{

  int arr[] = {10, 20, 30, 40, 50};
  int *ptr = arr;

  // Notice that we have used arr instead of &arr[0].Because both are same
  // we can not use &arr
  for (int i = 0; i < 5; ++i)
  {
    cout << "The " << i + 1 << " element of array is " << *(ptr + i) << " and the address is " << ptr + i << endl;
    cout << "Address of " << i + 1 << " using array is " << &arr[i] << endl;
  }
  return 0;
}
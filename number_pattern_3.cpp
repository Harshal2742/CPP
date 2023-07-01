#include <iostream>
using namespace std;
/*
    1        1
    12      21
    123    321
    1234  4321
    1234554321  */

int main()
{
  int n;
  int i, j, space;

  cout << "Enter the number you want pattern :";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << j;
    }
    for (space = n; space > i; space--)
    {
      cout << "  ";
    }
    for (j = i; j >= 1; j--)
    {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int h, w;
  char symbol;
  cout << "Enter the height :";
  cin >> h;
  cout << "Enter the width :";
  cin >> w;
  cout << "Enter the symbol :";
  cin >> symbol;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cout << setw(2) << symbol;
    }
    cout << endl;
  }
  return 0;
}
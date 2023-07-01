#include <iostream>
using namespace std;

class point
{
  int x, y, z;

public:
  point(int a, int b, int c)
  {
    x = a;
    y = b;
    z = c;
  }

  point(int a, int b)
  {
    x = a;
    y = b;
    z = 1; // if we assing value here does not require to pass 3rd argument
  }

  point(int a)
  {
    x = a;
    y = 1;
    z = 1;
  }

  point() // defualt constructor as it does not take any parameter
  {
    x = 1;
    y = 1;
    z = 1;
  }

  void display(void)
  {
    cout << "The co-ordinattes of points are (" << x << "," << y << "," << z << ")" << endl;
  }
};

int main()
{
  point h1(4, 5, 6);
  h1.display();

  point h2(4, 5);
  h2.display();

  point h3(4);
  h3.display();

  point h4;
  h4.display();

  return 0;
}
#include <iostream>
using namespace std;

class point
{
      int a, b, c;

public:
      point(int x, int y = 10, int z = 100)
      {
            a = x;
            b = y;
            c = z;
      }

      void display()
      {
            cout << "The co-ordinates of point is (" << a << "," << b << "," << c << ")" << endl;
      }
};

int main()
{
      point h1(2, 20, 200);
      h1.display();

      point h2(3, 30);
      h2.display();

      point h3(4);
      h3.display();

      return 0;
}
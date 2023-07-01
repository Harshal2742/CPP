#include <iostream>
using namespace std;

// Creating a Constructor
// Constructor is a special member function with the same name as of the class.
// It is used to initialize the objects of its class
// It is automatically invoked whenever an object is created
// 1. It should be declared in the public section of the class
// 2. They cannot return values and do not have return types
// i.e. we cannot write like int function_name(parameter)
// 3. It can have default arguments
// 4. We cannot refer to their address

class triangle
{
  int h, b;

public:
  triangle(void); // declearation of constructor and this is defualt constructor
                  // as it does not take parameter hence it is defualt constructor
  void getdata(void)
  {
    cout << "the height of triangle is " << h << " and the breadth is " << b;
  }
};

triangle ::triangle(void)
{
  h = 10;
  b = 15;
}

int main()
{
  triangle t1;
  t1.getdata();

  return 0;
}
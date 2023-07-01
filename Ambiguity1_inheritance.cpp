#include <iostream>
using namespace std;

class message1
{
public:
  void statement(void)
  {
    cout << "Hello,Good Morning" << endl;
    cout << "Have a nice day" << endl;
  }
};

class message2
{
public:
  void statement(void)
  {
    cout << "Hii,Good Night" << endl;
    cout << "Sweat dream" << endl;
  }
};

class display : public message1, public message2
{
public:
  void statement(void)
  {
    /*to call base class function with same name as in drived class
    we can do this
    syntax --> baseclassname :: functionname()*/
    message1 ::statement();
  }
};

int main()
{
  display a1;
  a1.statement();
  a1.message2::statement();
  /*we can also do this to call base class
  fuction with same name as in drived class
  syntax -->  objectname.baseclassname :: functionname()*/
  return 0;
}
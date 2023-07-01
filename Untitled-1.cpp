#include <iostream>
using namespace std;

class Test
{
private:
  int a;
  friend int setValue(Test);

public:
  Test()
  {
    a = 0;
  }

  void getValue()
  {
    cout << "a = " << a << endl;
  }
};

int setValue(Test t){
  t.a = 100;
  return t.a;
}

inline int cube(int s){
  return s*s*s;
}

int main()
{
  Test t1;
  cout<<setValue(t1)<<endl;
  return 0;
}

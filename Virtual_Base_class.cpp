#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
  int Roll_Number;
  string Name;

public:
  void setData(int a, string b)
  {
    Roll_Number = a;
    Name = b;
  }

  void getData(void)
  {
    cout << "Student Name :" << Name << endl;
    cout << "Roll Number :" << Roll_Number << endl;
  }
};

class theory : virtual public student
{
protected:
  float x, y, z;

public:
  void setTMarks(float x1, float y1, float z1)
  {
    x = x1;
    y = y1;
    z = z1;
  }
  void display1(void)
  {
    cout << "******Theory Marks******" << endl
         << "Physics :" << x << endl
         << "Chemistry :" << y << endl
         << "Maths :" << z << endl;
  }
};

class practical : virtual public student
{
protected:
  float p, q, r;

public:
  void setPMarks(float p1, float q1, float r1)
  {
    p = p1;
    q = q1;
    r = r1;
  }

  void display2(void)
  {
    cout << "******practical Marks******" << endl
         << "Physics :" << p << endl
         << "Chemistry :" << q << endl
         << "Maths :" << r << endl;
  }
};

class result : public theory, public practical
{
public:
  void percentage(void)
  {
    getData();
    display1();
    display2();
    cout << "******Total Marks******" << endl
         << "Physics :" << x + p << endl
         << "Chemistry :" << y + q << endl
         << "Maths :" << z + r << endl;
    cout << "The PCM percentage :" << (p + q + r + x + y + z) / 3;
  }
};

int main()
{
  result r1;
  r1.setData(342, "Pravin Lokhande");
  r1.setTMarks(62, 65, 77);
  r1.setPMarks(28, 25, 20);
  r1.percentage();
  return 0;
}
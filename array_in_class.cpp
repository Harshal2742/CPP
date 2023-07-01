#include <iostream>
using namespace std;

class student
{
  int studId[100]; // default variables are private in class
  int roll[100];
  int count;

public:
  void startId(void)
  {
    count = 0;
  }
  void InIdRoll(void);
  void OutIdRoll(void);
};

void student ::InIdRoll(void)
{
  cout << "Enter Id of student:" << endl;
  cin >> studId[count];
  cout << "Enter Roll no. of student:" << endl;
  cin >> roll[count];
  count++;
}

void student ::OutIdRoll(void)
{
  for (int i = 0; i < count; i++)
  {
    cout << "student no." << i + 1 << " ";
    cout << "The Id of student is " << studId[i] << " and "
         << "roll no. is " << roll[i] << endl;
  }
}

int main()
{
  int a;

  cout << "How many students there are:" << endl;
  cin >> a;
  student hii;
  hii.startId();
  for (int b = 1; b <= a; b++)
  {
    hii.InIdRoll();
  }
  hii.OutIdRoll();

  return 0;
}
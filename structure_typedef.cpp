#include <iostream>
#include <string>
using namespace std;

typedef struct student /*here by using "typedef" we can access structure by using keyword "H1"
                                                           instead of "struct student"*/
{                      // We define different data type in structure i.e. all datatype in under one datatype
   string name;
   int roll;
   char div;
   int MoNo;

} H1;

int main()
{

   H1 xyz;
   {
      xyz.name = "C S K";
      xyz.roll = 07;
      xyz.div = 'A';
      xyz.MoNo = 1234567890;
   }

   cout << "Name of student:" << xyz.name << endl;
   cout << "Roll No. of student:" << xyz.roll << endl;
   cout << "Division of student:" << xyz.div << endl;
   cout << "Mobile no. of student:" << xyz.MoNo << endl;

   return 0;
}
#include<iostream>
using namespace std;

class student
      { 
        int getId;
        static int count;   //if we use static then its value reamins same as earlier "object"

        public:

          void setdata(void)
               {
                cout<<"\nEnter the Id of student"<<endl;
                cin>>getId;
               }

          void getdata(void)
               {
                cout<<"The Id of student is "<<getId<<endl;
               }
//static function can access only static variable. 
          static void getnum(void)
               {
                cout<<"The student roll number is "<<count;
                 count++;
               }

      };

int student :: count=103001;//here we initiat the static variable

int main()
        {
         student a,b,c,d;
          a.setdata();
          a.getdata();
          student :: getnum();//we can access static member of class without object.

          b.setdata();
          b.getdata();
          student :: getnum();
          
          c.setdata();
          c.getdata();
          student :: getnum();

          d.setdata();
          d.getdata();
          student :: getnum();

         return 0;
        }
#include<iostream>
#include<string>
using namespace std;

// Base Class
class student1
{
 public :
  int roll;
  char div;

  student1()   //This is very important beacause derived class calls defualt constructor of base class
    {

    }

  student1(int a,char b)
    {
          roll=a;
          div=b;
    }
  
  void display1()
     {
         cout<<"The roll no. of student is "<<roll<<" and division is "<<div<<endl;
     }
   
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Derived Class
class student2 : public student1
      {
       private :
        string branch;

       public :
        
        student2(int a1,char b1,string c1)
         {
           roll=a1;
           div=b1;
           branch=c1;
         }

        void display2()
         {
         cout<<"The branch of student is "<<branch<<endl;
         }
        
      };


int main()
        {
         student1 s1(1,'A');
         s1.display1();

         student2 s2(12,'C',"Computer Engineering");
         s2.display1();
         s2.display2();

        return 0;
        }
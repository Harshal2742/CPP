#include<iostream>
#include<string>
using namespace std;

class student1
      {
       int roll;

       public :
          void setRoll(int a)
              {
                roll=a;
              }
            
         void getRoll()
            {
                 cout<<"The roll number of student is "<<roll<<endl;
            }
      };

class student2 : public student1
      {
      public :
        string name;
        
        void setName(string n)
           {
            name=n;
           }

        void getName()
           {
             cout<<"The name of student is "<<name<<endl;
           }
      };

class student3 : public student2
      { 
       private :
        float x,y,z;
       public :
        void setMark(float i,float j,float k)
            {
              x=i;
              y=j;
              z=k;
            }

           void getResult()
           {
            getName();
            getRoll();
            cout<<"The PCM percentage is "<<(x+y+z)/3<<endl;
           }
      };

int main()
        {
         student3 s1;
         s1.setRoll(420);
         s1.setName("Swarup Takade");
         s1.setMark(89,82,95);
         s1.getResult();
         return 0;
        }
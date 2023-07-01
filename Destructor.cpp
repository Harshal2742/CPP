#include<iostream>
using namespace std;

int count=0;

class num
      {
        public :
       
        
        num()
           {
           count++;
           cout<<"The constructor is called by object n"<<count<<endl;
           }
        // Destructor does not takes any argument 
        // Destructor does not  return any value 
        ~num()
           {
           cout<<"The distructor is called by object n"<<count<<endl;
           count--;
           } 
      };

int main()
        {
         cout<<"creating objects"<<endl;
         cout<<"creating first object"<<endl;
         num n1;
         {
         cout<<"strating block"<<endl;
         cout<<"creating two more objects"<<endl;
         num n2,n3;
         cout<<"exiting the block"<<endl;
         }
         cout<<"back to main"<<endl;
         return 0;
        }

/* Note:
     1.When object is created constructor is calle automatically
     2.When compiler noted that object is not require more then 
       destructor is called */
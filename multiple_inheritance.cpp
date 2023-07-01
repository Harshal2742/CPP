#include<iostream>
using namespace std;

class num1
      {
        protected :
         float a;
        public :
          void setvalue1(float a1)
              {
                a=a1;
              }
            
         float product1(void)
             {
              return a;
             }
      };

class num2
      {
        protected :
         float b;
        
        public :
          void setvalue2(float b1)
              {
                b=b1;
              }
            
         float product2(void)
             {
              return b;
             }
      };

class average : public num1,public num2
      {
        public:
         void show(void)
              {
               cout<<"The average of four numbers is "<<(product1()+product2())/2;
              }

      };
      
int main()
        {
         average q1;
          q1.setvalue1(13);
          q1.setvalue2(8);
          q1.show();
         return 0;
        }
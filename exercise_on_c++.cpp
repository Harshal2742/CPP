#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator
      {
          protected :
           float a,b;
           
          public :
           void setNum1(float a1,float b1)
                {
                 a=a1;
                 b=b1;
                }
           void calculat1(int n)
                {
                 switch(n)
                    {
                     case 1:
                       cout<<a+b<<endl;
                       break;
                     case 2:
                       cout<<a-b<<endl;
                       break;
                     case 3:
                       cout<<a*b<<endl;
                       break;
                     case 4:
                       cout<<a/b<<endl;
                       break;
                     default :
                        cout<<"Enter valid number"<<endl;
                       break;
                    }
                }
      };

class scientificCalculator
      {
       protected:
         float c;

       public :
         void setNum2(float c1)
              {
               c=c1;
              }

         void calculat2(int x)
              {
                switch (x)
                      {
                       case 1:
                        cout<<sin(c)<<endl;
                        break;
                       case 2:
                        cout<<cos(c)<<endl;
                        break;
                       case 3:
                        cout<<tan(c)<<endl;
                        break;
                       case 4:
                        cout<<asin(c)<<endl;
                        break;
                       case 5:
                        cout<<acos(c)<<endl;
                        break;
                       case 6:
                        cout<<atan(c)<<endl;
                        break;
                       default :
                        cout<<"Enter valid number"<<endl;
                        break;

                      }
              }
      };

class HybridCalculator : public simpleCalculator , public scientificCalculator
      {
       public:
        float s,p,q1,a2,b2,x1;
       void display()
           {
           cout<<"1.Simple Calculator"<<endl<<"2.Scientific Calculator"<<endl;
           cin>>s;
           if (s==1)
             {
             cout<<"Enter two numbers"<<endl;
             cin>>a2>>b2;
             setNum1(a2,b2);
             cout<<"1.Addition"<<endl<<"2.Substraction"<<endl<<"3.Multiplication"<<endl<<"4.Divison"<<endl;
             cin>>p;
             calculat1(p);
             }

           else if(s==2)
             {
              cout<<"Enter the value"<<endl;
              cin>>q1;
              setNum2(q1);
              cout<<"1.sin 2.cos 3.tan 4.sin^-1 5.cos^-1 6.tan^-1 "<<endl;
              cin>>x1;
              calculat2(x1);
             }

           }
      };

int main()
        {
        HybridCalculator z1;
        z1.display();
        return 0;
        }
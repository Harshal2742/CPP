#include<iostream>
using namespace std;

class complex
      {
       int a;
       int b;

       public :
           //we can define friend function in public as well as in private part
           //syntax: friend return_type name(parameter);
           friend complex sumComplex(complex h1, complex h2);

           void setNumber(int a1, int b1)
           {
               a = a1;
               b = b1;
             }

         void  printNumber()
             {
                 cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
             }

         void  printSum()
             {
                cout<<"The sum of complex numbers is "<<a<<" + "<<b<<"i"<<endl;
             }
      };

complex sumComplex(complex h1,complex h2)
           {
            complex h3;
            h3.setNumber((h1.a+h2.a),(h1.b+h2.b));
            return h3;
           }

int main()
        {
          complex c1,c2,c3;
            c1.setNumber(2,3);
            c1.printNumber();

            c2.setNumber(4,6);
            c2.printNumber();

            c3 = sumComplex(c1,c2);
            c3.printSum();
        
        return 0;
        }
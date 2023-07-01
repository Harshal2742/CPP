#include<iostream>
using namespace std;

class gym
      {
          int a;
          int b;

          public:
             void setdata(void)
                  {
                    cout<<"Enter the weight of member"<<endl;
                    cin>>a;

                    cout<<"Enter the protein required for member"<<endl;
                    cin>>b;
                  }
            
             void data(gym x,gym y)//here we passes object as argument in function
                  {
                   a = x.a + y.a;
                   b = x.b + y.b;
                  }

              void getdata(void)
                  {
                    cout<<"The weight of member is "<<a<<" and the protein required is "<<b<<endl;
                  }

             void getdata3(void)
                  {
                    cout<<"The weight  of 3rd  member is "<<a<<" and the protein required is "<<b<<endl;
                  }  
              
      };

int main()
        {
         gym c1,c2,c3;

          c1.setdata();
          c1.getdata();

          c2.setdata();
          c2.getdata();

          c3.data(c1,c2);
          c3.getdata3();
    
        return 0;
        }
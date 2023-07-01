#include<iostream>
#include<string>
using namespace std;


class binary
{
private:
   string s;
   void  check_binary(void);
public :
   void  read(void);
   void  compliment(void);
   void  display(void);
};

void binary :: read(void)
            {
                cout<<"Enter a binary numbers"<<endl;
                cin>>s;
            }
void binary :: check_binary(void)
            {
            for(int i=0;i < s.length();i++)
                {
                if( s.at(i) !='1' && s.at(i) !='0')
                   {
                    cout<<"Incorrect binary numbers";
                    exit(0);
                   }
                }
            }
        void binary :: compliment(void)
            {
            check_binary();
            for(int i=0;i < s.length();i++)
              {  if(s.at(i)=='1')
                {
                  s.at(i)='0';
                }
                 else
                {
                  s.at(i)='1';
                }
              }
            }
        void binary :: display(void)
             {
              cout<<"The compliment of entered binary is "<<endl<<s;
             }



int main()
        {
         binary d;
          d.read();
          d.compliment();
          d.display();
         
        return 0;
        }
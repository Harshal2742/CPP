#include<iostream>
using namespace std;

class BankDeposite
      {
        int final_amount;
        int principal_balance;
        float interest_rate;
        int interest_Rate;
        int time;

        public :
          BankDeposite();
          BankDeposite(int P,int y,float r);
          BankDeposite(int P,int y,int R);

          void display(void)
               {
                cout<<"The principal amount is "<<principal_balance
                    <<".The final amount after "<<time<<" year is "<<final_amount
                    <<endl;
               }
      };

BankDeposite :: BankDeposite(int p,int y,float r)
                {
                principal_balance=p;
                interest_rate=r;
                time=y;
                final_amount=principal_balance;
                for(int i=1;i<=y;i++)
                   {
                   final_amount=p*(1+interest_rate*time);
                   }
                }

BankDeposite :: BankDeposite(int p,int y,int R)
                {
                principal_balance=p;
                interest_rate=R;
                time=y;
                final_amount=principal_balance;
                for(int i=1;i<=y;i++)
                   {
                   final_amount=p*(1+interest_rate*time/100);
                   }
                }

int main()
        {
        int p,y,R;
        float r;

        cout<<"Enter the principal balance :";
        cin>>p;
        cout<<"Enter the years of dipositon :";
        cin>>y;
        cout<<"Enter the interest rate :";
        cin>>r;
        BankDeposite bd1(p,y,r);
        bd1.display();

        cout<<"Enter the principal balance :";
        cin>>p;
        cout<<"Enter the years of dipositon :";
        cin>>y;
        cout<<"Enter the interest rate :";
        cin>>R;
        BankDeposite bd2(p,y,R);
        bd2.display();
        
        return 0;
        }
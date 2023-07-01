#include<iostream>
using namespace std;

int sum=0;
struct test
{
string question;
string answer[3];
};

void DisplayTest(test Test)
{
  cout<<Test.question<<endl;
  for(int i=0;i<3;i++)
    {
    cout<<i+1<<")"<<Test.answer[i]<<endl;
    }
}

void option1(int Ans)
 {
  if(Ans==1)
   {
    cout<<"Correct"<<endl;
    sum+=1;
   }
  else
   {cout<<"Incorrect"<<endl;}
 }
void option2(int Ans)
 {
  if(Ans==2)
   {
    cout<<"Correct"<<endl;
    sum+=1;
   }
  else
   {cout<<"Incorrect"<<endl;}
 }
void option3(int Ans)
 {
  if(Ans==3)
   {
    cout<<"Correct"<<endl;
    sum+=1;
   }
  else
   {cout<<"Incorrect"<<endl;}
 }
int main()
        {
        int ans;
        test q1;
        q1.question="\nHow many elements in periodic table ?";
        q1.answer[0]="119";
        q1.answer[1]="118";
        q1.answer[2]="117";
        DisplayTest(q1);
        cout<<"select option :";
        cin>>ans;
        option2(ans);

        test q2;
        q2.question="on which day we celebrate world environment day ?";
        q2.answer[0]="June 5";
        q2.answer[1]="May 5";
        q2.answer[2]="April 27";
        DisplayTest(q2);
        cout<<"select option :";
        cin>>ans;
        option1(ans);

        test q3;
        q3.question="\nHow many laws of motion there are ?";
        q3.answer[0]="2";
        q3.answer[1]="5";
        q3.answer[2]="3";
        DisplayTest(q3);
        cout<<"select option :";
        cin>>ans;
        option3(ans);

        test q4;
        q4.question="\n100/5 + 4 =";
        q4.answer[0]="24";
        q4.answer[1]="2";
        q4.answer[2]="79";
        DisplayTest(q4);
        cout<<"select option :";
        cin>>ans;
        option1(ans);

        test q5;
        q5.question="Which of the following is true ?";
        q5.answer[0]="400*5=200";
        q5.answer[1]="34*5=170";
        q5.answer[2]="67*2=127";
        DisplayTest(q5);
        cout<<"select option :";
        cin>>ans;
        option2(ans);

        test q6;
        q6.question="\nWhich of the following is most abundant gas in atmoshere ?";
        q6.answer[0]="Oxygen";
        q6.answer[1]="Hydrogen";
        q6.answer[2]="Nitrogen";
        DisplayTest(q6);
        cout<<"select option :";
        cin>>ans;
        option3(ans);

        test q7;
        q7.question="What is apple ?";
        q7.answer[0]="A smartphone company";
        q7.answer[1]="Fruit";
        q7.answer[2]="both 1 and 2";
        DisplayTest(q7);
        cout<<"select option :";
        cin>>ans;
        option3(ans);

        test q8;
        q8.question="\nhow many vowels in english ?";
        q8.answer[0]="5";
        q8.answer[1]="26";
        q8.answer[2]="3";
        DisplayTest(q8);
        cout<<"select option :";
        cin>>ans;
        option1(ans);

        test q9;
        q9.question="\nWhat is full form of PC ?";
        q9.answer[0]="Personal Computer";
        q9.answer[1]="Public Control";
        q9.answer[2]="Public Computer";
        DisplayTest(q9);
        cout<<"select option :";
        cin>>ans;
        option1(ans);

        test q10;
        q10.question="\nWhich law of motion stats ,Every action there is equal and opposite reaction ?";
        q10.answer[0]="1st";
        q10.answer[1]="3rd";
        q10.answer[2]="5th";
        DisplayTest(q10);
        cout<<"select option :";
        cin>>ans;
        option2(ans);

        cout<<"\nYour score out of 10 is "<<sum<<endl;
        return 0;
        }
#include<iostream>
using namespace std;

class student
      {
       char div;
       int roll;

       public:
       void setDR(void)
            {
                cout<<"entr the division of student"<<endl;
                cin>>div;

                cout<<"Enter the roll number of student"<<endl;
                cin>>roll;
            }

       void getDR(void)
            {
                cout<<"The Division of is "<<div<<" and roll no. is "<<roll<<endl;
            }
      };

int main()
        {
         int n;
         cout<<"How many students there are:";
         cin>>n;
        
        student fb[n];  //here we make array of objects 
          for(int i=0;i<n;i++)
           {
            fb[i].setDR();
            fb[i].getDR();
           }

        
        return 0;
        }
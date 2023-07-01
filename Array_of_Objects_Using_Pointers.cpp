#include<iostream>
using namespace std;

class student
{
int Roll;
float par;

public :
void setData(int a,float b)
     {
      Roll=a;
      par =b;
     }

void getData(void)
     {
      cout<<"The Roll No. of student is "<<Roll
      <<endl;
      cout<<"The percentage is "<<par<<endl;
     }
};

int main()
        {
        int a,n;
        float b;
        cout<<"How many students there are : ";
        cin>>n;

        student* ptr = new student[n];
        student* ptrTemp=ptr;/* This is required because after first for 
        loop ptr value remains same ,so address is changed in next for 
        loop and throw error */

        // 1 2 3
        //     ^
        //     |
        //     |
        //     ptr
        // ptrTemp
        for(int i=0;i<n;i++)
           {
            cout<<"Enter the Roll No. and percentage of student "<<i+1<<endl;
            cin>>a>>b;
            ptr->setData(a,b);
            ptr++;
           }

        for(int j=0;j<n;j++)
           {
            ptrTemp->getData();
            ptrTemp++;
           }
        return 0;
        }
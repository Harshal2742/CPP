#include<iostream>
using namespace std;



int main()
        {
        int num;
        cout << "Enter number :";
        cin>>num;
        int i=2;
        int m=0;

        while(i<num)
        {
         if(num%i==0)
          {
            cout<<"Non prime"<<endl;
            m=1;
            break;
          }
          i++;
        }
        
        if(num==1){
           cout<<"1 is neither prime nor composite"<<endl;
        }
        else{
             if(m==0){
            cout<<"Prime"<<endl;
             }
        }
        return 0;
        }
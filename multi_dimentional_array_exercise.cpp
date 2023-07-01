#include<iostream>
#include<iomanip>
using namespace std;



int main()
        {
        int rows;
        int cols;
        float sum=0;
        cout<<"No. of student :";
        cin>>rows;
        cout<<"No. of subjects :";
        cin>>cols;
        int**table=new int*[rows];
        for(int i=0;i<rows;i++)
        {
          table[i]=new int[cols];
        }

        for(int i=0;i<rows;i++)
        {
          cout<<"Enter the marks student "<<char(97+i)<<endl;
          for(int j=0;j<cols;j++)
           {
            cin>>table[i][j];
            }
        }
        cout << endl<< endl;
        
          cout <<"student";
                for (int i = 0; i < cols;i++)
         {
           cout <<setw(4)<<i + 1;
         }
         cout << setw(4) << "%";
         cout << endl;
         for (int i = 0; i < rows; i++)
         {
           cout <<"  "<<char(97 + i)<<"     ";
           for (int j = 0; j < cols; j++)
           {
             cout<<setw(3) << table[i][j] << " ";
             sum += table[i][j];
           }
           cout << " " << setprecision(4) << sum / cols;
           sum = 0;
           cout << endl;
          }

      for(int i=0;i<rows;i++)
        {
          delete[] table[i];
        }
        delete[] table;
        table = NULL;
        return 0;
        }
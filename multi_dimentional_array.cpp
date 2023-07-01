#include<iostream>
using namespace std;

/*
                                    |      cols
               rows                 |   1  2  3  4
                   index            |   0  1  2  3
                         ***this arrays are coloums****                    
         |--->*row1[0] ---> array1[4]={ a, b, c, d}
         |
         |
**table--|--->*row2[1] ---> array2[4]={ a, b, c, d}
         |
         |
         |--->*row3[2] ---> array3[4]={ a, b, c, d}
*/

int main()
        {
        int rows=3;
        int cols=4,c=0;

        int** table = new int* [rows];//table is pointer which is pointing array of pointer
                                      // hence it declared as **table
        for (int i = 0; i < rows;i++)//here we have to allocate block of memory to each pointer
          {                          //that stored in table
            table[i] = new int [cols];
          }

          for (int i = 0; i < rows;i++)
            {
                for (int j = 0; j < cols;j++)
                {
                    table[i][j] = c++;
                }
            }
          for (int i = 0; i < rows;i++)
            {
                for (int j = 0; j < cols;j++)
                {
                    cout << table[i][j] << " ";
                }
                cout<<endl;
            }

        for (int i = 0; i < rows;i++)
          {
            delete[] table[i];//here we deleted memory allocated to each array(cols)
                              //which is stored in table which is array of pointer
          }
          delete[] table;//here we deallocate memoray for array table
          return 0;
        }
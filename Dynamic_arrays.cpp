#include<iostream>
using namespace std;



int main()
        {
            int size;

            cout << "Enter size : ";
            cin >> size;
            //string array[size];

            int *Array = new int[size];
            for (int i = 0; i < size  ;i++)
                {
                    cout << "Array[" << i << "] : ";
                    //cin >> *(myArray + i);
                    cin >> Array[i];
                }

                cout << "Elements in array : ";
             for (int i = 0; i < size  ;i++)
                {
                    //cout << myArray[i] <<" ";
                    cout << *(Array + i) << " ";
                } 
// by using "delete array" we can delete space allocated to one variable 
// by using "delete[] array" we can delete space allocated to block of variable 
                delete[] Array;
                Array = NULL;

/* this will not show any output as we deleted the Array before loop.
                for (int i = 0; i < size  ;i++)
                {
                    //cout << myArray[i] <<" ";
                    cout << *(Array + i) << " ";
                }                                        */
                return 0;
        }
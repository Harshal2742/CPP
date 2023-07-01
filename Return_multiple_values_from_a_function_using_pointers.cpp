#include <iostream>
using namespace std;


int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

void getMaxAndMin(int numbers[], int size,int* min,int* max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }

        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
    }
}
int main()
{
    int Numbers[5] = {34, 8,-6 , 0, 5};

    //cout << "Min is " << getMin(Numbers, 5)<<endl;
    //cout << "Max is " << getMax(Numbers, 5)<<endl;

    int Min = Numbers[0];
    int Max = Numbers[0];
    getMaxAndMin(Numbers, 5, &Min, &Max);

    cout << "Min is " << Min << endl;
    cout << "Max is " << Max << endl;

    return 0;
}
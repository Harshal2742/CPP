#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    cout << "The elements in vector" << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    
    int a;
    int size;
    cout << "Enter the size of vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element :";
        cin >> a;
        v1.push_back(a);
    }
    display(v1);
    v1.pop_back();
    cout << "After using pop_back" << endl;
    display(v1);

cout << "After using insert" << endl;
  vector<int>::iterator iter = v1.begin();
    v1.insert(iter+2,4,456);//here 4 will insert 4 copyies of 456
    display(v1);

    return 0;
}
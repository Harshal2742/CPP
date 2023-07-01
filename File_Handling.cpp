#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
    //fstream is a class and we decleared a variable "file" of type fstream
    fstream myFile;
    //we have to first open the file and here open() function take two parameters
    //1st->file name, 2nd->the mode in which we want to open file like read,write,append
    //If file does not exist the open function automatically create it
    // myFile.open("file handling.txt", ios ::out); //write mode->the output of programme will write in file
    // if (myFile.is_open())                        //is_open check file opened or not and return boolen value
    // {
    //     //here "<<" is insertion oprator i.e. we inserted hello\n in file
    //     myFile << "Hello\n"; //similar like cout<<->console out
    //     myFile << "This is second line\n";
    //     myFile.close(); //we should close file after writting or reading
    // }

//if we again open file in write mode then it will erase all privious content in file
//so we have to open file in "append(app)" mode
    // myFile.open("file handling.txt", ios ::out);//write
    // if(myFile.is_open())
    // {
    //     myFile << "Hello2..\n";
    //     myFile.close();
    // }

    // myFile.open("file handling.txt", ios::app);//append mode
    // if(myFile.is_open())
    // {
    //     myFile << "Hello2\n";
    //     myFile << "My self Harshal\n";
    //     myFile.close();//once you closed file you can not read or write in file
    // }

    myFile.open("file handling.txt", ios::in); //read mode->from the file we take input in programme
    if(myFile.is_open())
    {
        string line;
        while(getline(myFile,line))
        {
            cout << line <<endl;
        }
    }
    return 0;
}
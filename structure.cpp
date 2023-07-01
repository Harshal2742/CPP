 #include<iostream>
 #include<string>
 using namespace std;


 int main()
     {
    struct player
           { 
            string playername;
            char bloodGroup;
            float jursy;  
           };
        struct player one;
        one.playername="Dhoni";
        one.bloodGroup='B';
        one.jursy=07;

        cout<<"Player Name :"<<one.playername<<endl;
        cout<<"Blood Group :"<<one.bloodGroup<<endl;
        cout<<"jursy no.   :"<<one.jursy<<endl;
     }
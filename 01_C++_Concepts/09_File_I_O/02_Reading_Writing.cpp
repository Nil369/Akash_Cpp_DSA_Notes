#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
 
              // connecting our file with aout stream
               ofstream aout("rough.txt");
   
               // creating a name string variable and filling it with string entered by the user
              string name;
               cout<<"Enter your name: ";
              cin>>name;
     
             // writing a string to the file
             aout<<name + " is my name";
 
            // disconnecting our file
            aout.close();
            // connecting our file with ain stream
           ifstream ain("rough.txt");
 
          // creating a content string variable and filling it with string present there in the text file
           string content;
            ain>>content;
           cout<<"The content of the file is: "<<content;
 
           // disconnecting our file
           ain.close();
           return 0;
}

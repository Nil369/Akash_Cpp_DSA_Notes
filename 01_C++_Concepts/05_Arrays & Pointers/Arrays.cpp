/*
→ An array is a collection of items which are of the similar type stored in contiguous memory locations.
→ Sometimes, a simple variable is not enough to hold all the data.
→ For example, let’s say we want to store the marks of 2500 students; initializing 2500 different variable 
  for this task is not feasible.
→ To solve this problem, we can define an array with size 2500 that can hold the marks of all students.
→ For example int marks[2500];
*/

#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    return 0;
}
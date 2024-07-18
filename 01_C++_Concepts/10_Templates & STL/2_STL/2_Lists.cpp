#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    //Removing Elements from list 1
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);

    // Sorting List Elements:
    // list1.sort();
    // display(list1);

    // Reversing List Elements:
    // list1.reverse();
    // display(list1);


    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
    display(list2);

    // Merging two lists:
    list1.merge(list2);
    cout<<"\nAfter Merging: ";
    display(list1);
 
    return 0;
}

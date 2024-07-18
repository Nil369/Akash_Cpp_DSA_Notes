/*
A map in C++ STL is an associative container that stores key-value pairs. 
A map stores a key & values of some data type. All keys &all values in a map are of a single data type. 
A map always sorts these key-value pairs by the key elements in ascending order.
*/

#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap["Akash:"] = 99;
    marksMap["Shruti:"] = 97;
    marksMap["Kishlay:"] = 78;
    marksMap["Aditya:"] = 65;
    marksMap["Sachin:"] = 53;
    
    map<string,int> :: iterator iter;
    marksMap.insert( { {"Rohan:", 89}, {"Akshat:", 46} } );

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
 
    return 0;
}

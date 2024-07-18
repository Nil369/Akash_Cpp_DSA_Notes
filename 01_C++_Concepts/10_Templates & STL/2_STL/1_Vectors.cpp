/*
Vectors are sequence containers that fall under the category of class templates. 
They are used to store information in a linear fashion. Elements of a single data type
can be stored in a vector. In a vector, we can access elements faster in comparison to arrays. 
Although, insertion and deletion at some random position, except at the end is comparatively slower. 
And inserting any element at the end happens faster.

Syntax: 
vector<data_type> vector_name;
*/


#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    // Ways to create a vector:

    vector<int> vec1; // Zero length vector
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1); 

    vec1.pop_back(); // This pops the Last Element from the vector
    display(vec1);


    //Decleraing a vector Itretor:
    vector<int> :: iterator iter = vec1.begin(); //We can generate an iterator using the scope resolution iterator
    vec1.insert(iter+1,10, 69);
    display(vec1);


    vector<char> vec2(4);  //4-element character 
    display(vec2); 

    vector<char> vec3(vec2);//4-element character vector from vec2
    display(vec3); 

    vector<int> vec4(6,3); //6-element vector of 3s  
    display(vec4); 


    return 0;
}

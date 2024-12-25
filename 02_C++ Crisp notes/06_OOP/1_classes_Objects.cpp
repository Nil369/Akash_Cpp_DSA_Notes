# include <iostream>
# include <vector>

using namespace std;

// Define a class Tea to represent a tea
class Tea{
    //access Modifiers: by default it is private in C++ to change it we have to make it public/protected
    public:
        //data members (attributes)
        string teaName;
        int cups;
        vector<string> ingredients; // list of ingredients for the tea
        
        // Member functions
        void getTeaDetails(){
            cout<<"Tea Name: "<<teaName<< endl;
            cout<<"Number of Cups: "<<cups<< endl;
            cout<<"Ingredients: ";
            for (string item: ingredients){
                cout<<item<<", ";
            }
            cout<< endl;
        }
};

// Range-Based For Loop Syntax:-

// for (declaration : range_expression) {
//     // loop body
// }

// declaration: A variable to hold each element during iteration (in your example, string item).
// range_expression: The container or range to iterate over (in your example, ingredients).

int main(){

    //creating objects:
    Tea chai;
    chai.teaName = "Ginger Tea";
    chai.cups = 4;
    chai.ingredients = {"Ginger","Tea Leaves","Milk","Brewing"};
    chai.getTeaDetails();

    return 0;
}
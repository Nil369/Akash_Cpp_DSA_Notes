#include<iostream>
using namespace std;

void update(int arr[], int n) {

    cout << endl << "Inside the function" <<endl;
    
    //Here we are passing the base address of Array
    //which =>updating array's first element will also update the array at the main function
    arr[0] = 420;
    arr[1] = 418;

    //printing the array
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    } cout<<endl;


    cout << "Going back to main function" << endl;
}


int main() {

    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    cout<< endl << "Printing in main function" << endl;
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}
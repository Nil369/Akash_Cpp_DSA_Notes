# include <iostream>
using namespace std;

// function to search an Array element => Linear Search as we are traversing through the array 
// and searching for a specific element if we got the element we return true if not false

bool search(int arr[], int size, int key){
    
    for (int i = 0; i <size; i++)
    {
        if(arr[i] == key){
            return true;
        }
    }
    return false;

}

int main(){
    int size;
    cout<<"Enter the size of Array you want to create: ";
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    int key;
    cout<<"Enter a no. to find if the number is present in the inputed array: ";
    cin>>key;
    bool found = search(num,size,key);

    if (found){
        cout << key << " is present in the array." << endl;
    }
    else{
        cout << key << " is not present in the array." << endl;
    }
    

    return 0;
}
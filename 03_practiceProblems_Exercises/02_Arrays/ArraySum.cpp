# include <iostream>
using namespace std;

///function to sum Array Elements:
int sumArray(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
    
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

    int ans = sumArray(num,size);
    cout<<"Sum of array elements is: "<<ans<<endl;

    return 0;
}
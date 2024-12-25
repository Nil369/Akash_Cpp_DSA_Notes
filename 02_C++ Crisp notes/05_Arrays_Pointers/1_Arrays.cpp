#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size){
    int total = 0;
    for(int i = 0 ; i < size ; i++){
        total += chai[i];
    }
    return total;
}

int main(){

    //declearing & initializing an array
    int chaiServed[7] = {50, 60, 55, 70, 65, 80, 75};

    //accessing array values
    cout << "Chai cups served on Day 1: " << chaiServed[0];
    cout << "Chai cups served on Day 2: " << chaiServed[1];


    int chaiTemperature[5] = {85, 90, 88, 92, 89};

    cout << "Chai temperature: ";
    //accessing array values with loops
    for(int i = 0 ; i < 5 ; i++ ){
        cout << chaiTemperature[i] << " degree C \n";
    }


    //total number of chai cups served per week
    int total = totalChaiServed(chaiServed, 7);
    cout << "Total chai cups served per week: " << total <<" ml."<< endl;

    return 0;
}
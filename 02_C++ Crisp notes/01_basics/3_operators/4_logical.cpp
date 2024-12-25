#include <iostream>
using namespace std;

int main(  ){

    bool isStudent;
    int teaCups;

    cout << "Are you a student (\"1\" for \"yes\" / \"0\" for \"no\"): ";
    cin >> isStudent;

    cout << "How many Tea Cups have you bought? "<<endl;
    cin >> teaCups;

    if(isStudent || teaCups >= 15){ 
        cout<<"You are ELIGIBLE for discount";
    }else{
        cout<<"You are NOT ELIGIBLE for discount";
    }

    return 0;
}
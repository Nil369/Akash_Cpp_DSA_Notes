#include <iostream>
using namespace std;

int main(  ){

    bool isMember;
    int teaCups;

    cout<<"Enter the number of tea cups you bought: ";
    cin >> teaCups;

    cout<<"Are you a member above 1 year?"<<endl;
    cout<<"Enter (\"1\" for \"YES\" / \"0\" for \"NO\"): ";
    cin >> isMember;

    if(teaCups>=12 || isMember){
        cout<<"You are QUALIFIED to get a discount!";
    }else{
        cout<<"You are NOT QUALIFIED to get a discount!";
    }

    return 0;
}
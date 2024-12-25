#include <iostream>
#include <string>
using namespace std;

int main(){

    int hour;
    cout<<"Enter hour in (24 hours format): ";
    cin>>hour;

    if(hour>=8 && hour<=18){
        cout<<"Tea Shop is OPEN!"<<endl;
    }else{
        cout<<"Tea Shop is CLOSED!"<<endl;
    }

    return 0;
}
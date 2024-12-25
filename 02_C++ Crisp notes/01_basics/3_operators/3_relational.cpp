#include <iostream>
using namespace std;

int main(  ){

    int teaCups;
    cout << "How many tea cups did you bought ?" <<endl;
    cin >> teaCups;

    if(teaCups > 20){
        cout << "CONGRATS!! You earned a GOLD Badge!" <<endl;
    }
    else if(teaCups>=10  && teaCups <=20){
        cout << "CONGRATS!! You Earned a SILVER Badge!" <<endl;
    }
    // else if(teaCups>=10  and teaCups <=20){ // and is a token equivalent to && -> Not recommended for other Team members
    //     cout << "CONGRATS!! You Earned a SILVER Badge!" <<endl;
    // }
    else{
        cout<<"You have NOT earned any Badge. Better Luck next time!!"<<endl;
    }

    return 0;
}
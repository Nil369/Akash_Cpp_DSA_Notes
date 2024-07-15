/*Print this Pattern:
    ABC
    DEF
    GHI
*/

#include<iostream>
using namespace std;

int main() {

    int n,count=1;
    cout<<"Enter a number:";
    cin>>n;

    int row = 1;
    while(row <= n) {

        int col = 1;

        while(col <= n) {
            char ch = 'A' + count - 1;
            cout<< ch;
            count++;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}
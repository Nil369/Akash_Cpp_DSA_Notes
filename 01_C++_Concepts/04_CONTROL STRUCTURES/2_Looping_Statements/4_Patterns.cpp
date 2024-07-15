/*Print this pattern:
    ****
    ****
    ****
    by taking input from the user
*/

# include <iostream>
using namespace std;

int main(){
    int n,i=0;
    cout<<"\nEnter a number: ";
    cin>>n;

    while (i<n){
        int j = 1;
        while(j<=n){

            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

}
/* Print the following Pattern:
    1 2 3
    1 2 3
    1 2 3
*/

# include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter a number: ";
    cin>>n;

    while(i<=n){

        int j=1;

        while(j<=n){
            cout<<j<<" ";
            j++;
        }

        cout<<endl;
        i++;
    }
    //For Reverse Printing
    cout<<"\n\nReverse Printing for the same pattern\n\n";
    int x = 1;
    while(x<=n){

        int y=1;

        while(y<=n){
            cout<<n-y+1<<" ";
            y++;
        }

        cout<<endl;
        x++;
    }
    return 0;
}
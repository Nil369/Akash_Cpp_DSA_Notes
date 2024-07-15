/* Print the following Pattern:
    1 2 3 
    4 5 6
    7 8 9    
*/

# include <iostream>
using namespace std;

int main(){
    int n,i=1,count=1;
    cout<<"Enter a number: ";
    cin>>n;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count++<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

#include <iostream>
using namespace std;

bool isEven(int a){
   //1->Even  0-> Odd
   if(a%2==0){
    return 1; //Even
   }
   return 0;//Odd
}
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;
  if(isEven(n)){
    cout<<n<<" is an Even number";
  }
  else{
    cout<<n<<" is an Odd number";
  }

return 0;
}
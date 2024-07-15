#include <iostream>
using namespace std;

int power()
{
    int a, b, ans = 1;
    cout << "Enter a number and its Power : ";
    cin >> a >> b;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int pow = power();
    cout<<"Answer = "<<pow;
    
    return 0;
}
#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num < 2)
    {   return 1;}
    return num*factorial(num-1);
}

int ncr (int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
int input;
cin >> input;

for (int i = 0; i < input; i++)
{
    for (int j = input-i-1; j >= 0; j--)
    {
        cout<<" ";
    }

    for (int row = 0; row <= i; row++)
    {
        cout<<ncr(i,row)<<" ";
    }
    cout<<endl;
}
    return 0;
}
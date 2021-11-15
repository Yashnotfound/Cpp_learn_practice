#include <iostream>
using namespace std;

int factorial(int input)
{   int factor=1;
    if(input==0)
{return 1;}

    for (int i = 0; i < input; i++)
        factor = factor * (input - i);
    {
        if (input == 0)
        {   factor = 1;}
    } 
    return factor;
}

int main()
{

    int loop_var;
    int input;
    cin >> loop_var;
 
    for (int i = 0; i < loop_var; i++)
    {
        cin >> input;
        cout << factorial(input) << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int number_of_inputs, divisor, counter = 0;
    cin >> number_of_inputs >> divisor;
    for (int i = 0; i < number_of_inputs; i++)
    {
        int number;
        cin >> number;
        if (number % divisor == 0)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
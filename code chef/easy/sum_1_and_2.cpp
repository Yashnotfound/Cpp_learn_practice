#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    string input_number;
    int loop_var;

    cin >> loop_var;
    for (int i = 0; i < loop_var; i++)
    {
        cin >> input_number;
        int length = input_number.length();
        int sum_required = (input_number.at(0) - '0') + (input_number.at(length - 1) - '0');
        cout << sum_required << endl;
    }

    return 0;
}
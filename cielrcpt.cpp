#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, temp = 1;
    vector<int> menu;
    for (int i = 0; i < 12; i++)
    {
        menu.push_back(temp);
        temp *= 2;
    }
    cin >> n;
    while (n--)
    {
        int input;
        int flag = 0;
        cin >> input;

        while (input)
            for (int i = menu.size() - 1; i >= 0; i--)
            {
                if (input >= 2048)
                {
                    input -= 2048;
                    flag++;
                }
                if (input >= menu[i])
                {
                    input -= menu[i];
                    flag++;
                }
            }

        cout << flag << endl;
    }

    return 0;
}
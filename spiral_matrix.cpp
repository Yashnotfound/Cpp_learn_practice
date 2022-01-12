#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x1 = 0;
    int x2 = n - 1;
    int y1 = 0;
    int y2 = m - 1;
    int k = m * n;
    int counter = 0;

    while (counter < k)
    {
        for (int i = y1, j = 0; j < m - 1; i++, j++)
        {
            cout << arr[x1][i] << " ";
            counter++;
        }

        if (counter >= k)
        {
            break;
        }

        for (int i = x1, j = 0; j < n - 1; j++, i++)
        {
            cout << arr[i][y2] << " ";
            counter++;
        }

        if (counter >= k)
        {
            break;
        }

        for (int i = y2, j = 0; j < m - 1; j++, i--)
        {
            cout << arr[x2][i] << " ";
            counter++;
        }

        if (counter >= k)
        {
            break;
        }

        for (int i = x2, j = 0; j < n - 1; j++, i--)
        {
            cout << arr[i][y1] << " ";
            counter++;
        }

        x1++;
        x2--;
        y1++;
        y2--;
        m -= 2;
        n -= 2;
        if (n < 2)
        {
            n = 2;
        }
        if (m < 2)
        {
            m = 2;
        }
    }
    return 0;
}
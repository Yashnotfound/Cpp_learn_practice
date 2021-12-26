#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int maxans = INT_MIN;
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int best[100];
    best[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        best[i] = max(best[i - 1] + arr[i], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (best[i] > maxans)
        {
            maxans = best[i];
        }
    }

    cout << maxans << endl;

    return 0; 
}
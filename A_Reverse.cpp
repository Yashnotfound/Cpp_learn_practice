#include <bits/stdc++.h>
#define ll long long
using namespace std;

void reverse(int arr[], int l, int r)
{
    while(l<r)
    {
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int flag = 0;
        for (auto &it : arr)
        {
            cin >> it;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != i + 1)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[j] == i + 1)
                    {
                        reverse(arr, i, j);
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag)
            {
                break;
            }
        }

        for (auto it : arr)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
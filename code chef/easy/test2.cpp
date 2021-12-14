#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        float a[n];
        int i = 0;
        for (; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        
        int count = 0;
        int smallnum = a[0];
        while (smallnum > 0)
        {
            count = count + 1;
            smallnum = smallnum / 10;
        }
       
        int h = (pow(10, count));

        i = 1;
        for (; i < n; i++)
        {
            while (a[i] > h)
            {
                a[i] = a[i] / 10;
            }
        }
    
        sort(a, a + n); // sorting array in decending order
    
        float rev[n];
        for (int i = 0,j= n-1; i < n; i++,j--)
        {
            rev[i]=a[j];
        }
        

        stringstream ss;
        string s;

        for (i = 0; i < n; i++)
        {
            int x, y;
            char ch;
            ss << rev[i];
        }

        ss >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '.')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 0;
    int pwr = 0;
    while (n)
    {
        int dig;

        dig = n % 10;
        n = n / 10;

        int sum;
        sum = pow(8, pwr) * dig;
        m = m + sum;

        pwr = pwr + 1;
    }
    cout << m << endl;
    int N;
    N = m;
    int ans = 0;
    int prod = 1;
    while (N > 0)
    {
        int rem = N % 2;
        ans = ans + prod * rem;
        prod = prod * 10;
        N = N / 2;
    }
    cout << ans;

    return 0;
}

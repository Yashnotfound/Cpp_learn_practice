#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        ll arr[n];
        ll sum = 0;
        bool flag = 0;
        for (auto &it : arr)
        {
            cin >> it;
            sum += it;
        }
        sum -= m;
        set<ll> ans;
        for (int i = 1; i <= sqrt(sum); i++)
        {
            if (sum % i == 0)
            {
                ans.insert(i);
                ans.insert(sum / i);
            }
        }
        
        for (auto it = ans.rbegin(); it != ans.rend(); ++it)
        {  
            bool flag=0;
            ll cpy = m;
            for (int i = 0; i < n; i++)
            {
                if(arr[i]%*it!=0)
                {
                    cpy-=arr[i]%*it;
                }
                if(cpy<0)
                {   flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                cout<<*it<<endl;
                break;
            }
        }

    }

    return 0;
}
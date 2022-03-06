#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i=1;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        while(n>1)
        {
            if(i%2)
            {
                cout<<i<<" "<<2*i<<" ";
                n-=2;
            }
            i++;
        }
        if(n)
        {cout<<i+1;}
        cout<<endl;

        
    }
    return 0;
}
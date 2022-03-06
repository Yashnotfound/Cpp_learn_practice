# include <iostream>
# include <cmath>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int p=log2(n-1);
        int x = pow(2,p);

        for (int i = 1; i < n; i++)
        {
            if(i==x)
            {
                cout<<0<<" ";
            }
            cout<<i<<" ";

        }
        cout<<endl;
    }
    


    return 0;
}
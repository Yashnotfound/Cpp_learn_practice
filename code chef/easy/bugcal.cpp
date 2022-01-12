# include <iostream>
# include <cmath>
# define ll long long int 
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        int m = max(a,b);
        ll ans = 0;
        int i = 0;
        while(m)
        {
            int temp = (a%10+b%10)%10;
            ans += pow(10,i)*temp;
            i++;
            m/=10;
            a/=10;
            b/=10;
        }

        cout<<ans<<endl;

    }


    return 0;
}
# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        
        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }
        int x= n/7;

        int plus = (x+1)*7;
        int minus = (x)*7;

        if(plus/10==n/10)
        {
            cout<<plus<<endl;
        }
        else{cout<<minus<<endl;}

    }
    
    return 0;
}
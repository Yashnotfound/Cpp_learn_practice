# include <iostream>
# include <set>
# include <math.h>
using namespace std;
int main(){
    
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;

        if(n==2)
        {cout<<2<<endl;}

        else if((n&n-1)==0)
        {cout<<2*n-1<<endl;}
        else
        {
            int p;
            p = ceil(log(n)/log(2));
            cout<<pow(2,p)<<endl;
        }
    }
    return 0;
}    
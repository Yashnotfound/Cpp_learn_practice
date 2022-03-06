# include <iostream>
# include <math.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long int a,b,c;

        a=sqrt(n);
        b=cbrt(n);
        c=cbrt(sqrt(n));
        cout<<a+b-c<<endl;
    }
    return 0;
}
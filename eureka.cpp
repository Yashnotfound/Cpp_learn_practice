# include <iostream>
# include <cmath>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        float ans = pow(0.143*n,n);
        if(ans-(int)ans<0.5)
        {
            cout<<(int)ans<<endl;
        }
        else{cout<<(int)ans+1<<endl;}
    }

    return 0;
}
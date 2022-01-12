# include <iostream>
# include <cmath>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int counter=0;
        if(d<=10)
        {
            int exp = pow(2,d);
            if(n>exp)
            {cout<<exp<<endl;}   
            else{cout<<n<<endl;}
        }
        else
        {
            counter = 1024;
            long long ans = counter*pow(3,d-10);
            if(n>ans)
            {cout<<ans<<endl;}
            else{cout<<n<<endl;}
        }
    }
    return 0;
}
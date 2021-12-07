# include <iostream>
# include <cmath>
using namespace std;

int main(){
    
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        int counter =0;
        
        while(n)
     {  
        int i =0;
        while(pow(2,i++) <= n)
        {}
        n -= pow(2,i-1);
        counter++;
     }
    
        cout<<counter<<endl;
    }


    return 0;
}
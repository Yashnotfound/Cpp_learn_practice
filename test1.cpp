# include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        bool flag =false;

        for (int j = 2; j <= i/2; j++)
        {
           if(i%j==0) 
            {flag=true;
            break;}
        
        }
        if(flag==0)
        {cout<<i<<" ";}
    }
    
    return 0;
}
# include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int ncpy=n/2+1;
    int ncpy1=n/2;
    int print=1;
    while(ncpy--)
    {
        for (int i = 0; i < (n)/2; i++)
        {
            cout<<" ";
        }
        for (int i = 0; i < print; i++)
        {
            cout<<"*";
        }
        cout<<endl;
        print+=2;
        n-=2;
    }
 
    print-=4;
    n+=4;

    while(ncpy1--)
    {   for (int i = 0; i < (n)/2; i++)
        {
            cout<<" ";
        }
        for (int i = 0; i < print; i++)
        {
            cout<<"*";
        }
        cout<<endl;
        n+=2;
        print-=2;
    }

} 
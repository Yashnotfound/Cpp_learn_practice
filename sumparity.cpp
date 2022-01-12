# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n>>a;
        if(n&1)
        {
            if(a&1)
            {cout<<"odd"<<endl;}
            else
            {cout<<"impossible"<<endl;}
        }
        else
        {
            if(a&1)
            {cout<<"even"<<endl;}
            else{cout<<"impossible"<<endl;}
        }
    }
    return 0;
}
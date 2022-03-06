# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==k)
        {
            cout<<2*k-1<<endl;
        }
        else{cout<<n+k<<endl;}
    }
    return 0;
}
# include <iostream>
using namespace std;

int main(){
    
    int n,p;
    cin>>n>>p;
    long int ans=1;
    while(p--)
    {
        ans*=n;
    }
    cout<<ans;

    return 0;
}
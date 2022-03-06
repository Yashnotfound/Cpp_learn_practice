# include <iostream>
#include  <cmath>
using namespace std;
int main() {
 
int t;
cin>>t;
while(t--)
{
    long long int ch,cd,mh,md;
    cin>>ch>>cd>>mh>>md;
    long long int k,w,a;
    cin>>k>>w>>a;
    bool b=0;
    
 
    for (int i = 0; i <= k; i++)
    {
        ch+=i*a;
        cd+=(k-i)*w;
 
        long long int r1 = ((mh+cd-1)/cd );
        long long int r2 = ((ch+md-1)/md );
        
        if(r1<=r2)
        {
            b=1;
            break;
        }
        ch-=i*a;
        cd-=(k-i)*w;
    }
 
    if(b==1)
    {cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    
}
 
return 0;
}
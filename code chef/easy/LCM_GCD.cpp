# include <iostream>
using namespace std;

int gcd (int a,int b )
{
    if(a==0)
    {return b;}

    return gcd(b%a,a);
}

int lcm (int a,int b, int g)
{
    return a*b/g;
}

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int g = gcd(a,b);
        cout<<g<<" "<<lcm(a,b,g)<<endl;
    }


    return 0;
}
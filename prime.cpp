# include <iostream>
using namespace std;

int main(){
     
    int t;
    cin>>t;
    while(t--)
 {
    int n;
    cin>>n;
    bool flag=0;
    int i = 2;

    while(i<=n/2)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }

     if(!flag)
     {
         cout<<"is prime"<<endl;
     }   
     else{cout<<"not prime"<<endl;}
 }
}

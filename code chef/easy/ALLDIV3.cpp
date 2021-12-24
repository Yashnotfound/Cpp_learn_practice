# include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int c1=0,c2=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%3==1)
        {c1++;}
        if(arr[i]%3==2)
        {c2++;}
    }
    if(c1==0&&c2==0)
    {
        cout<<0<<endl;  
    }
    else if(c1==c2)
    {
        cout<<c1<<endl;
    }
    else if(c2>c1)
    {
        int check=c2-c1;
        if((check)%3==0)
        {
            int div = check/3;
            cout<<c1+check-div<<endl;
        }
        else{cout<<-1<<endl;}
    }
    else if(c1>c2)
    {
        int check=c1-c2;
        if((check)%3==0)
        {
            int div = check/3;
            cout<<c2+check-div<<endl;
        }
        else{cout<<-1<<endl;}
    }

}
return 0;
}
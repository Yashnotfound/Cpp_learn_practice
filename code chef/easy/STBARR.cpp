# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >>t;
    while(t--)
    {
      int n;
      cin>>n;
      int arr[n];
      int mx=0;
      int flag=0;
      for (int i = 0; i < n; i++)
      {
          cin>>arr[i];
          mx=max(arr[i],mx);
      }
       

      for (int i = 0; i < n; i++)
      {
       if(arr[i] != mx)
       {
           flag=1;
           break;
       }   
      }

      if(flag==0)
      {cout<<'0'<<endl;}
      else
      {
          if(arr[n-1]==mx)
          {cout<<"1"<<endl;}
          else
          {
              cout<<"2"<<endl;
          }
      }
    }


    return 0;
}
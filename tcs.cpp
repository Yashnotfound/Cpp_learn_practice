# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int sum1=0;
        int sum2=0;
        int temp;
        int arr1[3];
        int arr2[3];
        for(int i = 0;i < 3; i++)
        {
            cin>>temp;
            sum1+=temp;
            arr1[i]=sum1;
        }

        for (int i = 0; i < 3; i++)
        {
            cin>>temp;
            sum2+=temp;
            arr2[i]=sum2;
        }

        if(arr1[2]>arr2[2])
        {
            cout<<"dragon"<<endl;
        }

        else if(arr1[2]<arr2[2])
        {
            cout<<"sloth"<<endl;
        }

        else
        {
            for(int i=0;i<3;i++)
            {
                if(arr1[i]>arr2[i])
                {
                    cout<<"dragon"<<endl;
                    break;
                }
                else if(arr1[i]<arr2[i])
                {
                    cout<<"drag"<<endl;
                    break;
                }
                if(i==2)
               {    if(arr1[i]==arr2[i])
                    {cout<<"tie"<<endl;}
               }
            }

        }
        
    }
    return 0;
}
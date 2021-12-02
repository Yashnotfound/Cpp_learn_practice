# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        int len;
        cin>>len;
        int lenc=len;
        int arr[len];

        for (int i = 0; i < len; i++)
        {
            cin>>arr[i];
        }

        int arr1[len*2];
        for (int i = 0, j=len; i < len; i++,j++)
        {
            arr1[i]=arr[i];
            arr1[j]=arr[i];
        }
        
        int temp;
        int maximum=0;

    for (int i = 0; i < len; i++)
    {         
        temp = arr1[i];
        for (int j = i; j < len+i-1; j++)
        {
            temp = temp + arr1[j+1];
            maximum = max(temp,maximum);
        }
        
    }   

     for (int i = len*2-1; i >= len; i--)
     {
         temp = arr1[i];
         for (int j = i; j >= len+i; j--)
         {
             temp = temp + arr1[j-1];
             maximum = max(temp,maximum);
         }
     }

    cout<< maximum<<endl;
    
 }

    return 0;
}
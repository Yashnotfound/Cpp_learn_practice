# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)

    {

        int n;
        cin>>n;
        int copy=n;
        int arr[200];
        int i=0;
        while(copy)
        {   
            int temp = copy%10;
            copy = copy/10;
            arr[i]=temp;
            i++;
        }
    int num;

        for (int j = 2; j < n; j++)
        {
            int temp=0;
            int index=0;
            for( index=0;index<i;index++)
            {
                num = arr[index]*j+temp;
                arr[index]=num%10;
                temp=num/10;
            }
 
            while(temp)
            {
                arr[index]=temp%10;
                temp=temp/10;
                index++;
                i++;
            }
        }
        
        for (int j = i-1; j >= 0; j--)
        {
            cout<<arr[j];
        }
        
cout<<endl;

    }

    return 0;
} 
# include <iostream>
using namespace std;

int main(){

int t;
cin >>t;
while (t--)
{
    int n;
    cin>>n;
    string arr[n];
    int arr1[n];
    int total =0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }



    for (int i = 0; i < n; i++)
    {

        int sum=0;
        for (int j = 0; j < arr[i].length()-1; j++)
        {
            if(j==0)
            {sum+=2;}
            
            if(arr[i][j]=='d'|| arr[i][j]=='f')
            {
                if(arr[i][j+1]=='d'|| arr[i][j+1]=='f')
                {sum+=4;}
                else{sum+=2;}
            }
            else
            {
                if(arr[i][j+1]=='j'|| arr[i][j+1]=='k')
                {sum+=4;}
                else{sum+=2;}
            }
        }  
        arr1[i]=sum;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(i != j && arr[i] != "")
    //         {
    //             if(arr[i]==arr[j])
    //             {
    //                 arr1[j]/=2;
    //                 arr[j]="";
    //             }
    //         }
    //     }
        
    // }
 
    for (int i = 0; i < n; i++)
    {
        total += arr1[i];
    }
    
    cout<<total<<endl;

}     

    return 0;
}
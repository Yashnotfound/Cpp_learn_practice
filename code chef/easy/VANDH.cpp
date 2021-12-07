# include <iostream>
# include <array>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        int v,h;
        cin>>v>>h;
 
        int maximum= max(v,h);
        int size = (maximum*2)+1;
        if(v==h)
        {size=(maximum*2) +2;}
        cout<<size<<endl;
        int arr[size];
        int arr1[size];

        for (int i = 0; i < size; i++)
        {
            arr[i]=0;
        }
        
        for (int i = 0; i < size; i++)
        {
            arr1[i]=1;
        }
    if (v>=h)
    { 
            int v1=v+1;
           for (int i = 0; i < size; i++)
        {       if(v1 != 0)
                {if((i+1)%2==0)
                {arr[i]=1;
                v1--;}
                }
        }
        
            for (auto i : arr)
            {
                cout<<i;
            }
            cout<<endl;
            
    }

    else
    {
        int h1=h+1;
        for (int i = 0; i < size; i++)
        {   if(h1 != 0)
            {if((i+1)%2==0)
            {arr1[i]=0;
            h1--;}
            }
        }
        
        for (auto i : arr1)
            {
                cout<<i;
            }
            cout<<endl;
    }   

    }
    return 0;
}
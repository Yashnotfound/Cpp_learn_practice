# include <iostream>
using namespace std;

bool arrsort (int arr[], int n, int i)
{   bool b1;
    if(i<n-1)
    {
        b1 = arr[i+1]>=arr[i] ? 1 : 0;
        i++;
    }
    if(i==n-1)
    {return 1;}
    if(b1==0)
    {return 0;}
    b1 = arrsort(arr,n,i);
    return b1;
}

int insertarr (int arr[],int n, int cap, int val, int pos)
{
    if(n==cap)
    {return n;}

    pos--;

    for(int i = n-1; i >= pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    return (n+1);
}

int deletearr (int arr[],int pos,int n)
{
    if(pos>n)
    {return n;}
    for(int i = pos; i<n; i++)
    {
     arr[i-1]=arr[i];   
    }
    arr[n-1]=0;
    return (n-1);
}

int main(){
    int n;
    cin>>n;
    int cap=100;
    int arr[cap];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int newsize = insertarr(arr,n,cap,12,7);
    for (int i = 0; i < newsize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    newsize = deletearr(arr,4,7);
    for (int i = 0; i < newsize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arrsort(arr,n,0)<<endl;

    return 0;
}
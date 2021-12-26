# include <iostream>
using namespace std;
int main() {

int n,k;
cin>>n>>k;
int arr[n];
int sumt[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n-k; i++)
{
    int sum=0;
    for (int j = i; j < i+k; j++)
    {
        sum+=arr[j];
    }
    sumt[i]=sum;
}
int max=0;
int index;
for (int i = 0; i <n-k+1 ; i++)
{
    if(sumt[i]>max)
    {
        index=i;
        max=sumt[i];
    }
}

while(k--)
{
    cout<<arr[index]<<" ";
    index++;
}

return 0;
}
# include <iostream>
using namespace std;

int main(){
    
 int n;
 cin >> n;

 while(n--)
 {
    int len;
    cin >> len;
    int lenc= len;
    int lenc_r =len;
    int arr[len];
    int temp;
    int maximum=0;
    int max_i;

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        temp = arr[i];
        maximum = max(temp,maximum);
    }
    
    for (int i = 0; i < len; i++)
    {
        if(arr[i]==maximum)
        {max_i=i;
        break;}
    }
    
    

    temp = arr[max_i];
    while(--lenc)
    {   
        if(max_i==len-1)
        {max_i=-1;}
        temp = temp + arr[max_i+1];
        maximum = max(temp,maximum);
        max_i++;
    }

    int max1= maximum;
    int arr_rev[len];

    for (int i = 0,j = len-1; i < len; i++,j--)
    {
        arr_rev[i]=arr[j];
    }
    int max_i2= len-max_i-1;

    temp = arr[max_i2];
    while(--lenc_r)
    {   
        if(max_i2==len-1)
        {max_i2=-1;}
        temp = temp + arr_rev[max_i2+1];
        maximum = max(temp,maximum);
        max_i2++;
    }

    int max2 = maximum;

    cout << max(max1,max2)<<endl;
 }


    return 0;
}
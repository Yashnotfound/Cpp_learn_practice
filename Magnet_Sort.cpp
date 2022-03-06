# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int arr1[n];
        int index=-1;
        int indexend=-1;
        int count=0;
        bool flag=0;
        string str;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        cin>>str;
        sort(arr1,arr1+n);
        for (int i = 0; i < n; i++)
        {
            if(arr1[i]!=arr[i])
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            cout<<0<<endl;
            continue;
        }  

        for (int i = 0; i < n; i++)
        {
            if(str[i]=='N')
            {count++;}
        }

        if(count==0||count==n)
        {
            cout<<-1<<endl;
            continue;
        }
        for (int i = n-1; i > index; i--)
        {
            if(arr1[i]!=arr[i])
            {
                indexend=i;
                break;
            }
        }
        for (int j = indexend; j < n ; j++)
        {
            for (int i = 0; i <= index; i++)
            {
                if(str[i]!=str[j])
                {
                    cout<<1<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag)
            {break;}
        }
        
        if(flag==0)
        {
            cout<<2<<endl;
        }
    }
    return 0;
}
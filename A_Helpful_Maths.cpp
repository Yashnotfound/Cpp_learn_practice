# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string str;
    cin>>str;
    char a;
    int count1=0;
    int count2=0;
    int count3=0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='1')
        {count1++;}
        else if(str[i]=='2')
        {count2++;}
        else if(str[i]=='3')
        {count3++;}
    }
        int sum=count1+count2+count3;
        int arr[sum];   
        int i=0;
        while(count1--)
        {
            arr[i]=1;
            i++;
        }
        while(count2--)
        {
            arr[i]=2;
            i++;
        }
        while(count3--)
        {
            arr[i]=3;
            i++;
        }
        for (int i = 0; i < sum-1; i++)
        {
            cout<<arr[i]<<'+';
        }
        cout<<arr[sum-1]<<endl;
        
    return 0;
}
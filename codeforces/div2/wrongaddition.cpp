# include <iostream>
# include <math.h>
# include <string.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        bool b=0;
        string s1,s2;
        int arr[s2.length()];
        cin>>s1>>s2;
        int j=0;
        for (int i = s1.length()-1; i >= 0; i--)
        {
            if(s2[i]<s1[i])
            {
                if(s2[i-1]!=1)
                {
                    b=1;
                    break;
                }
            else
                {
                    arr[j]=10+s2[i]-s1[i];
                    j++;
                }
            }

            else
            {
                arr[j] = s2[i]-s1[i];
                j++;
            }
        }
        if(b)
        {cout<<"-1"<<endl;}
        else
        {
            for (int i = 0; i < s1.length(); i++)
            {
                cout<<arr[i];
            }
            cout<<endl;
        }
                
    }

    return 0;
}
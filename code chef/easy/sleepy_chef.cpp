# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,rep;
        cin>>n>>rep;
        string arr;    
        cin>>arr; 
        int counter2=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]=='0')
            {  
                 int counter1=0;
                while(arr[i]=='0')
                {
                counter1++;
                i++;
                }
                while(counter1>=rep)
                {
                    counter1-=rep;
                    counter2++;
                }
            }
        }
         
        cout<<counter2<<endl;
    }
 
    return 0;
}
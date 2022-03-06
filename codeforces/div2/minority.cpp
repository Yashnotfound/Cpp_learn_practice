# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int counter1=0;
        int counter2=0;

        for (int i = 0; i < str.length(); i++)
        {
            if(str[i]=='0')
            {counter1++;}
            else{counter2++;}
        }
        
        if(counter1>counter2)
        {cout<<counter2<<endl;}
        if(counter1<counter2)
        {cout<<counter1<<endl;}
        if(counter1==counter2)
        {
            cout<<counter1-1<<endl;     
        }
    }

    return 0;
}
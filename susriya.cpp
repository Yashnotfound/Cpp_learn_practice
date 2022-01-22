# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        int arr[3] = {2,3,5};
        int w = 0;
        
            if(p>=arr[2])
            {
                w= w + p/arr[2];
                p%=arr[2];
            }
             if(p>=arr[1])
            {
                w= w + p/arr[1];
                p%=arr[1];
            }
             if(p>=arr[0])
            {
                w= w + p/arr[0];
                p%=arr[0];
            }

            cout<<w<<endl;
            cout<<p<<endl;
        if(w%2==0)
        {
            cout<<"RIYA"<<endl;
        }
        else{cout<<"SUSHANT"<<endl;}
        
    }


    return 0;
}
# include <iostream>
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    while(k--)
    {
        for (int i = 1; i < n; i++)
        {
            if(str[i]=='G'&&str[i-1]=='B')
            {
                swap(str[i],str[i-1]);
                i++;
            }
        }
    }

    cout<<str;
    return 0;
}
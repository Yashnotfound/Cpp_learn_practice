# include <iostream>
using namespace std;

int main(){
    
        string str;
        cin>>str;
        char arr[12]{'a','A','e','E','i','I','o','O','u','U','y','Y'};
        int len = str.length();
        for (int i = 0; i < len; i++)
        {
            bool b=0;
            for (int j = 0; j < 12; j++)
            {
                if(str[i]==arr[j])
                {
                    b=1;
                    break;
                }
            }

            if(!b)
            {
                if(str[i]<=90)
                {str[i]+=32;}
                cout<<"."<<str[i];
            }
        }
        cout<<endl;

    return 0;
}
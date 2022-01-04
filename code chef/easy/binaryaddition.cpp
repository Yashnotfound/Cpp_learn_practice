# include <iostream>
using namespace std;

int main(){
    
    string s1,s2;
    cin>>s1>>s2;

    int l1=s1.length();
    int l2=s2.length();
    string apend="";
    if(l2>l1)
    {   
        for (int i = 0; i < l2-l1; i++)
        {
            apend+='0';
        }
        s1 = apend+s1;
    }
    else
    {   
        for (int i = 0; i < l1-l2; i++)
        {
            apend+='0';
        }
        s2 = apend+s2;
    }

    int length = max(l1,l2);
    int sum[length+1];
    int carry=0;

    for (int i = length-1; i >= 0 ; i--)
    {
        

    }
    


    return 0;
}
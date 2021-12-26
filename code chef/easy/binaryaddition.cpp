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
    
        
    }





    return 0;
}
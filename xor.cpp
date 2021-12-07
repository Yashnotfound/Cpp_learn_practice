# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

string dec_bin (int dec)
{
    string str;
    int temp=0;
    int i=0;
    stringstream ss;
    while(dec)
    {
        temp = dec%2;
        dec=dec/2;
        if(temp)
        {ss<<1;}
        else{ss<<0;}
        
    }
    ss>>str;
 return str;

}
 
int main(){
    
    int a,b;
    cin>>a>>b;
    string out;
    stringstream s1;
    stringstream s2;
    string a1 = dec_bin(a);
    string b1 = dec_bin(b);

    int len = max(a1.length(),b1.length());
    
     while(len>=a1.length())
     {
         s2<<0;
         s2>>a1;
     }
     while(len>=b1.length())
     {
         s2<<0;
         s2>>b1;
     }


    for (int i = 0; i < len; i++)
    {
        if(a1[i]==b1[i])
        {s1<<0;}
        else{s1<<1;}       
    }

     s1>>out;
    int length = out.length();
    char rev[length];

    for (int i = length-1, j =0; i >= 0; i--, j++)
    {
        rev[j] = out[i];
    }

    for (int i = 0; i < length; i++)
    {
        cout<<rev[i];
    }
    cout<<endl;

    

    return 0;
}
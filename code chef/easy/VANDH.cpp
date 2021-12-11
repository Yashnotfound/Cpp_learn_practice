# include <iostream>
using namespace std;

int main(){
    

int t;
cin>>t;
while(t--)
{

string ans ="";
int v,h;
cin>>h>>v;

if(h==v)
{
    for (int i = 0; i <= h; i++)
    {
        ans += "01";
    }
    
}

else if(h>v)
{
    for (int i = 0; i < v; i++)
    {
        ans += "01";
    }

    for (int i = 0; i < h-v; i++)
    {
        ans+="010";
    }


}


else
{
    for (int i = 0; i < h+1; i++)
    {
        ans += "10";
    }

    for (int i = 0; i < v-h-1; i++)
    {
        ans += "110";
    }
    ans += "1";

}
cout<<ans.length()<<endl;
cout<<ans<<endl;


}

    return 0;
}
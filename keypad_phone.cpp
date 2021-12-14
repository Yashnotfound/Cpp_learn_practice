# include <iostream>
using namespace std;
 
int keypad(int n,string output[])
{   
    int last_d = n%10;

if (n%10== 1||n%10==0)
    {
        output[0]="";
        return 1;
    }
  
    int smalloutput = keypad(n/10,output);
    string input;    
    switch(last_d)
    {
        case 2 : input="abc";
                  break;
        case 3 : input="def";
                  break;
        case 4 : input="ghi";
                  break;
        case 5 : input="jkl";
                  break;
        case 6 : input="mno";
                  break;
        case 7 : input="pqrs";
                  break;
        case 8 : input="tuv";
                  break;
        case 9 : input="wxyz";
                  break;
    }
 
    for (int i = 1; i < input.length(); i++)
    {
        for (int j = 0; j < smalloutput; j++)
        {
            output[smalloutput*i+j]=output[j];
        }
        
    }
     
for (int i = 0; i < input.length(); i++)
{
    for (int j = 0; j < smalloutput; j++)
    {
        output[smalloutput*i+j] += input[i];
    }
    
}
    return smalloutput*input.length();

}

int main(){
    

    string output[1000];
    int count;
    int n;
    cin>>n;
    count=keypad(n,output);
    for (int i = 0; i < count; i++)
    {
        cout<<output[i]<<endl;
    }
    
    return 0;
}
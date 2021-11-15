# include <iostream>
using namespace std;
void harsh();
void sum();

int main()
{  
    /*harsh(); 
    for (int i = 0; i < 3; i++)
    {
        sum();
        
    }*/
    int a=5;
    int & b=a;
    cout<<a<<b;
    a=6;
    cout<<a<<b;

    
    return 0;
    
} 
 
void harsh(void) 
{
    cout<<"harsh chutiya \n";
}
void sum()
{    int a,b;
     cin>>a>>b;
     int c= a+b;
     cout<<c<<endl;
}
# include <iostream>
# include <sstream>
using namespace std;

int main(){
     
    int n;
    cin>>n;
    int ncpy = n/2+1;
    char start1 = 'A';
    int  start2 = 2;
    string str ="";
    stringstream ss;
    while(ncpy-- && n)
    {  
        n--;
        str += start1;
        cout<<str<<endl;

        if(n)
        {   
            str+=to_string(start2);     
            cout<<str<<endl;
        }
        n--;
        start1+=2;
        start2+=2;
        
    }

    return 0;
}
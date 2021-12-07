# include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >>n;

    while (n--)
    {
        char array [3];

        for (int i=0;i<3;i++)
        {
            cin>>array[i];
        }
        
        char a;
        char b;

        cin >> a;
        cin >> b;

        int a1,b1;

        for (int i = 0; i < 3; i++)
        {
            if(a==array[i])
            {a1 = i;}

            if(b==array[i])
            {b1 = i;}
        }

        if(a1 > b1)
        {cout<<b<<endl;}
        else{cout<<a<<endl;}
    }
    

    return 0;
}
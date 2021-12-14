# include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    
    string ans ="NO";
    int kx,ky,x1,y1,x2,y2;
    cin>>kx>>ky>>x1>>y1>>x2>>y2;

    if(!(kx==1 || kx==8 || ky==1 || ky==8))
    {cout<<ans<<endl;}

    else
    {
        if(kx==1)
        {
            if((x1==2 || x2==2) && y1 != y2)
            {
                if(abs(y1-ky)>1 && abs(y2-ky)>1)
                {ans="Yes";}
            }
        }
        
       else if(kx==8)
        {
            if((x1==7 || x2==7) && y1 != y2)
            {
                if(abs(y1-ky)>1 && abs(y2-ky)>1)
                {ans="Yes";}
            }
        }
       
       if(ky==1)
        {
            if((y1==2 || y2==2) && x1 != x2)
            {
                if(abs(x1-kx)>1 && abs(x2-kx)>1)
                {ans="Yes";}
            }
        }
        
       else if(ky==8)
        {
            if((y1==7 || y2==7) && x1 != x2)
            {
                if(abs(x1-kx)>1 && abs(x2-kx)>1)
                {ans="Yes";}
            }
        }

        cout<<ans<<endl;
    }
    }

    return 0;
}
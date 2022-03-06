# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int l,b,sx,sy,x,y;
        int ans1,ans2;
        cin>>l>>b>>x>>y>>sx>>sy;
        if(x>sx)
        {
            ans1 = 2*l-sx-x;
        }
        else
        {
            ans1 = sx-x;
        }
        if(y>sy)
        {
            ans2 = 2*b-sy-y;
        }
        else
        {
            ans2 = sy-y;
        }

        cout<<min(ans1,ans2)<<endl;

    }

    return 0;
}
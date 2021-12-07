# include <iostream>
using namespace std;
# include <vector>


int main() {

int t;
cin >>t;

while(t--)
{
    int prime[] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int n;
    cin>>n;
    int temp =0;
    vector<int> sp;
    bool b=0;


        for (int i = 0; i < 25; i++)
        {
            for (int j = i+1; j < 25; j++)
            {
                temp=prime[i]*prime[j];
                sp.push_back(temp);
                if(temp>=n)
                {break;}
            }
        }

    temp = 0;
    for (int i = 0; i < sp.size(); i++)
    {
        temp = n-sp[i];
        for (int i = 0; i < sp.size(); i++)
        {
            if(temp==sp[i])
            {
                b=1;
                break;
            }
        }
    }

    if(b)
    {cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}     
}

return 0;
}
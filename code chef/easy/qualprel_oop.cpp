# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

class qualprel{
int temp,position,length;
vector <int> vec;
int flag;
public:

void input()
{
    flag=0;
    cin>>length>>position;

    for (int i = 0; i < length; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
}

    void sorting ()
    {sort (vec.begin(),vec.end());}

    void solve()
    {for (int i = 0; i < length; i++)
    {
        if (vec[i] >= vec[length-position])
        {
            flag++;
        }   
    }
    }

    ~ qualprel()
    {cout<<flag;
      flag=0;
      vec.clear();  
    }

};
int main() {

int n;
cin>>n;
while(n--)
{
qualprel q1;

q1.input();
q1.sorting();
q1.solve();
}
return 0;
}
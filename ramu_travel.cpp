# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

class commute{

int c1,c2,c3,c4;
int n,m;
vector <int> rikshaw;
vector <int> cab;
int temp;
int sum_rick;
int sum_cab;
int sum_total;

public :

void input()
{
    cin>>c1>>c2>>c3>>c4;
    cin>>n>>m;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        rikshaw.push_back(temp);
    }

    for (int i = 0; i < m; i++)
    {
        cin>>temp;
        cab.push_back(temp);
    }
    
    
}

void compare_rick()
{
    temp=0;
    for (int i = 0; i < rikshaw.size(); i++)
    {
        temp+=min(rikshaw[i]*c1,c2);
    }
    
    sum_rick=min(temp,c3);
}
void compare_cab()
{
    temp=0;
    for (int i = 0; i < cab.size(); i++)
    {
        temp+=min(cab[i]*c1,c2);
    }
    
    sum_cab=min(temp,c3);
}

int compare_both()
{

sum_total=min(sum_rick+sum_cab,c4);

return sum_total;
}

void reset()
{
    rikshaw.clear();
    cab.clear();
}

};

int main(){
    
int n;
cin>>n;

while(n--)
{
    commute c;

    c.input();
    c.compare_rick();
    c.compare_cab();
    cout << c.compare_both()<<endl;
    c.reset();

}


    return 0;
}
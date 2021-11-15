# include <iostream>
# include <vector>
using namespace std;

class arrays{

int no_array;
int no_query;
int no_input;
vector<vector<int> > out;
int temp;

public :

void input()
{
    cin>>no_array>>no_query;
    for (int i = 0; i < no_array; i++)
    {
        vector<int> in;
        cin>>no_input;
        for (int i = 0; i < no_input; i++)
        {
            cin>>temp;
            in.push_back(temp);

        }
        out.push_back(in);
    }
}

void query_solve()
{
    int out_num,in_num;
    for (int i = 0; i < no_query; i++)
    {
        cin>>out_num>>in_num;
        cout<<out[out_num][in_num];
    }
}

};

int main() {

arrays a1;

a1.input();
a1.query_solve();
return 0;
}
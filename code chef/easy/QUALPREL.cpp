# include <iostream>
# include <vector>
using namespace std;

class sort
{
int length;
int query;
vector < int > seq;

public :

void input()
{   int n;
    cin>>length;
    cin>>query;
    for (int i = 0; i < length; i++)
    {   
        cin>>n;
        seq.push_back(n); 
    }
}

void anti_bubble()
{
    for (int i = 0; i < length-1; i++)
    {
        for (int j = length-1; j > i; j--)
        {   if (seq.at(j)>seq.at(j-1))
        {
            swap(seq.at(j),seq.at(j-1));
        }
        
            
        }        
    }
}

void solve_query()
{
if(seq.at(query-1)==seq.at(query))
{cout<<++query<<endl;}
else cout<<query<<endl;

}

/*void output()
{for (int i = 0; i < length; i++)
{
    cout<<seq.at(i);
}
    cout<<endl;
}
void bubble_sort()
{
    for (int i = 0; i < length-1; i++)
    {
        for (int j = 0; j < length-1-i; j++)
        {
            if(seq.at(j) > seq.at(j+1))
            {swap(seq.at(j),seq.at(j+1));}
        }     
    }
}

void query_solve()
{  int counter=0;
   query=query-1;

   for (int i = 0; i < length; i++)
   {
      if(seq.at(length-query-1)<=seq.at(i))
      {counter++;}

   }
   
   cout<<counter<<endl;
}*/




};

int main(){
    
sort s1;
int n;
cin>>n;

while(n--)

{
    s1.input();
    s1.anti_bubble();
    s1.solve_query();

}
 return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,rep;
    cin>>rep;

    while(rep--)
    {
    cin >> n;

    vector<int> table;
    vector<int> backup; 
    table.push_back(0);
    table.push_back(1);

    
        for (int i = 2; i < n; i++) 
        {
            table.push_back(table[i - 1] + table[i - 2]);
        }

  for (int i = 0; i < table.size(); i++)
  {
      table[i] = table[i]%10;
  }

while(table.size() > 1)
{
    for (int i = table.size()-1; i >= 0; i--)
    {
        if((i+1)%2)
        {table.erase(table.begin() +i);}
    }
}

 cout<<table[0];
}
}
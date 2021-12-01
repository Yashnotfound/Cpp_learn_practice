# include <iostream>
# include <vector>
# include <string>

using namespace std;
void inverse( string );
int main() 
{
string s1;
cin>>s1;
inverse(s1);
return 0;
}
void inverse(string str)
{   vector <char> rev;
     vector <int> vec;
    char temp;
    int flag;
    for (int i = 0, j=str.length()-1; i < str.length(); i++, j--)
    {
        temp=str.at(j);
        rev.push_back(temp);
    }
    for (int i = 0; i < rev.size(); i++)
    {
        cout<<rev[i];
    }
    cout<<endl;
    

    int l =rev.size();

    for (int i = 0; i < l; i++)
    {
        int k =i+1;
        flag=rev[i]-'0';
        vec.insert(vec.begin() +(flag-1), k);
    }

    for (int i = 0; i < l; i++)
    {
        cout<<vec[i];
    }
}
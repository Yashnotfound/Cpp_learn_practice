# include <iostream>
# include <vector>

using namespace std;

int main(){

vector <int> vec1; 
int element;


for (int i = 0; i < 7; i++)
{  cin>>element;
    vec1.push_back(element);
}
for (int i = 0; i < 7; i++)
{
    cout<<vec1.at(i)<<endl;
}



    return 0;
}
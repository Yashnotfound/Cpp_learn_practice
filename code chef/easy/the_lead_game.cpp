# include <iostream>
# include <vector>
# include <algorithm>
# include <math.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int one,two,winner,win_no;
    int sum1=0,sum2=0;
    vector<int> vec;
    vector<int> win;
    vector<int> copy;
   
while(n--)
{
    cin>>one>>two;
    sum1+=one;
    sum2+=two;
    winner = sum1 > sum2 ? 1 : 2 ;
    win.push_back(winner);
    vec.push_back(fabs(sum1-sum2));
    copy.push_back(fabs(sum1-sum2));

}
sort(vec.begin(),vec.end());

for (int i = 0; i < vec.size(); i++)
{
    if(vec[vec.size()-1]==copy[i])
    {win_no=i;}
}

cout<<win.at(win_no)<<" "<<copy.at(win_no);

return 0;
}
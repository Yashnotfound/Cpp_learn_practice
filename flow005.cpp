# include <iostream>
# include <vector>
using namespace std;
int main() {
int n,test;
int notes;
vector<int> den;
den.push_back(1);
den.push_back(2);
den.push_back(5);
den.push_back(10);
den.push_back(50);
den.push_back(100);

cin>>n;
while(n--)
{
int flag=0;
int input;
cin>>input;

while(input)
{
    for (int i = 5; i >= 0; i--)
    {
    while(input>=100)
    {input-=100;
    flag++;
    }
        if(input>=den[i])
        {
            input-=den[i];
            flag++;
            break;
        }
    }
}

cout<<flag<<endl;
}

return 0;
}
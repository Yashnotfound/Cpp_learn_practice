# include <iostream>
# include <vector>
using namespace std;

class snake{

int length;
vector <char> vec1;
bool cond1;
bool cond2;

public :

void input()
{
    char a;
    cin>>length;

    for (int i = 0; i < length; i++)
    {
        cin>>a;
        vec1.push_back(a);
    }
}
    
void transform()
{
    for (int i = length-1; i >= 0; i--)
    {
        if(vec1.at(i)=='.')
        {vec1.erase(vec1.begin() +i);}
    }
}  

void cond1check()  // To check if number of heads and tails are equal
{
    int counter1=0;
    int counter2=0;
   for (int i = 0; i < vec1.size(); i++)
   {
       if(vec1.at(i)=='H')
       {counter1++;}
       else{counter2++;}
   }
   if(counter1==counter2)
   {
       cond1=1;
   }
    
}
 
void cond2check()
{   int counter = 0;
    for (int i = 0; i < vec1.size(); i++)
    {
        if(i%2)
        {if(vec1.at(i)=='T')
            {counter++;}
        }
    }   if(counter==vec1.size()/2)
        {cond2=1;}
    
    
}

void final()
{
    if(cond1&&cond2) 
    {cout<<"Valid"<<endl;}
    else{cout<<"Invalid"<<endl;}
    cond1=0;
    cond2=0;
    vec1.clear();
}

void output()
{for (int i = 0; i < vec1.size(); i++)
{
    cout<<vec1.at(i);
}
cout<<"\n"<<vec1.size() <<endl;
}
 
};

int main(){
    
snake s1;
int n;
cin>>n;
while(n--)
{
s1.input();
s1.transform();
s1.cond1check();
s1.cond2check();
//s1.output();
s1.final();
}
    return 0;
}
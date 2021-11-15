# include <iostream>
# include <vector>
using namespace std;

class prime{

protected :
int temp;
vector<int> prime_nos;
int num;

public :

void input()
{cin>>num;

}

void process1()
{
    

    for (int i = 2; i <= num/2; i++)
    {
        bool flag=0;
        for (int j = 2; j <= i/2; j++)
        {
            if(i%j==0)
            {flag=1;}            
        }
        if(flag==0)
        {prime_nos.push_back(i);}   
    }   
}
    
void output()
{
    for (int i = 0; i < prime_nos.size(); i++)
    {
        cout<<prime_nos[i]<<" ";
    }
    cout<<endl;
}


};

class semiprime : public prime
{
protected :
vector<int> semiprime_nos;

public :

void process2()
{
    for (int i = 0; i < prime_nos.size()-1; i++)
    {
        for (int j = i+1; j < prime_nos.size(); j++)
        {
            temp=prime_nos[i]*prime_nos[j];
            if(temp<num)            
            {semiprime_nos.push_back(temp);}
        }
        
    }
    


}

void okreport()
{   
    bool flag=0;
    int comp;
    for (int i = 0; i < semiprime_nos.size(); i++)
    {
        comp=num-semiprime_nos[i];

        for (int j = 0; j < semiprime_nos.size(); j++)
        {   
            if(comp==semiprime_nos[j])
            {flag=1;}           
        }        
    }
    
    if(flag)
    {cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    flag=0;


}



void output2()
{
for (int i = 0; i < semiprime_nos.size(); i++)
    {
    cout<<semiprime_nos[i]<<" ";
    }
    cout<<endl;
}

void reset()
{
    prime_nos.clear();
    semiprime_nos.clear();

}

};


int main(){
    
semiprime a;
int n;
cin>>n;

while(n--)
{
a.input();
a.process1();
//a.output();
a.process2();
//a.output2();
a.okreport();
a.reset();
}  
    return 0;
}
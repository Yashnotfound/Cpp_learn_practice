# include <iostream>
using namespace std;

class bank{

    int principal;
    float rate;
    int time;
    float returnval;

    public :

    bank(){};
    bank(int,int,int);
    bank(int,float,int);
    void show();

};

bank :: bank(int p,int r,int t)
{
        principal=p;
        rate=float(r)/100;
        time=t;
        returnval=principal;
        for (int i = 0; i < time; i++)
        {
            returnval=returnval *(1+rate);
        }
}

bank :: bank(int p,float r, int t)
{   
        principal=p;
        rate=r;
        time=t;
        returnval=principal;
        for (int i = 0; i < time; i++)
        {
            returnval=returnval *(1+rate);
        }


}

void bank :: show()
{

    cout<<returnval<<endl;
}

int main(){

int prin,rate,time;
float Rate;



    bank b1,b2;

    cin>>prin>>rate>>time;
    b1 = bank(prin,rate,time);
    b1.show();

    cin>>prin>>Rate>>time;
    b2= bank(prin,Rate,time);
    b2.show();
    
    return 0;
}
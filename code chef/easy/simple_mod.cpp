# include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
    int n,m,k,q;
    cin>>n>>m>>k>>q;
    int arr[n][m];
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

   while(k--)
   {
       int r1,c1,r2,c2,add;
       cin>>add>>r1>>c1>>r2>>c2;
       for (int i = r1; i <=r2 ; i++)
       {
           for (int j = c1; j <= c2; j++)
           {
               arr[i][j]+=add;
           }
       }
   } 
int cumsum[n][m];
    int sum1=0;
    for (int i = 0; i < n; i++)
    {   int sum2=0;
        for (int j = 0; j < m; j++)
        {
            if(i==0&&j==0)
            {cumsum[i][j]=arr[i][j];}
            else if(i==0&&j>0)
            {
                cumsum[0][j]=cumsum[0][j-1]+arr[0][j];
            }
            else if(i>0&&j==0)
            {
                cumsum[i][0]=cumsum[i-1][0]+arr[i][0];
            }
            else if(i>0&&j>0)
            {cumsum[i][j]=cumsum[i][j-1]+cumsum[i-1][j]-cumsum[i-1][j-1]+arr[i][j];}
        }
    }
    
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m ; j++)
    {
        cout<<cumsum[i][j]<<" ";
    }
    cout<<endl;
}

while(q--)
{
int r1,c1,r2,c2;
cin>>r1>>c1>>r2>>c2;
for (int i = 0; i < count; i++)
{
    /* code */
}


}
}
return 0;
}
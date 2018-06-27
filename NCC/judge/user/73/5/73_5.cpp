#include<iostream>
using namespace std;
int main()
{
    int x1,x2,t;
    cin>>x1>>x2;
    cin>>t;
    int l=0,z=0;
    
    for(int j=x1;j<=x2;j++)
    {
for(int i=1;i<=j;i++)
{
    if(j%i==0)
    {
        l++;
    }
}
}
if(l==2)
{
    
    z++;
    cout<<z;
}
return 0;
}   
    
    

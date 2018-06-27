/*Type your code here!*/
#include<iostream>

using namespace std;

int main()
{
    long int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        long int n,x;
        cin>>n>>x;
        
        if(n%x==0)
        cout<<x;
        else
        cout<<n%x;
        
        
    }
return 0;}
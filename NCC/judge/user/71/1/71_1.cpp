/*Type your code here!*/
#include<iostream>


using namespace std;

int main()

{
    
    int n[100],x[100];
     int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>n[i]>>x[i];
    }
    for(i=0;i<t;i++)
    {
        cout<<(n[i]%x[i]);
        cout<<"\n";
    }
    
    return 0;
}
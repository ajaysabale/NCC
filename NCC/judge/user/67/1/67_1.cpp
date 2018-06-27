#include<iostream>
using namespace std;
int main()
{
 
 int a,b,n,i;
 int c;
 int g;
 
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++)
        
    {
        
        cin>>a>>b;
    if(a%b==0)
    {
       c=a/b;
       g=c-1;
       a=a-g*b;
       arr[i]=a;
    }
        else
        {
            c=a/b;
            a=a-c*b;
            arr[i]=a;;
            
            
            
        }    
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
return 0;      
 
    }         
       

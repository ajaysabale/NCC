/*Type your code here!*/
#include<iostream>
#include<math.h>
using namespace std;

int main()

{
     int t;
     cin>>t;
     
     for(int i=0;i<t;i++)
     {
         int a,b;
         int count=0;
         
         cin>>a>>b;
         
         for(int j=a;j<=b;j++)
         {   int h=0;
             for(int k=2;k<sqrt(j);k++)
             {  
                 if(j%k==0)
                 h=1;
             }
         if(h==0)
           count++;
             
         }
 cout<<count<<endl;
     
}
return 0;
}
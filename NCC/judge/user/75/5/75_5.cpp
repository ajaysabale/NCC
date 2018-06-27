/*Type your code here!*//*Type your code here!*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T,x1,x2,count,flag;
    cin>>T;
    for(int i=0;i<T;i++)
    {   count=0;
        cin>>x1>>x2;
        for(int j=x1;j<=x2;j++)
        {   
            flag=0;
            for(int q=2;q<sqrt(j);q++)
            {
                
                
                    if(j%q==0)
                    {
                        flag++;
                        break;
                 
                    }
                    
                
                
            
                
            }
                if(flag==0)
                    count++;
       
        }
     cout<<count-1<<endl;
    }
}
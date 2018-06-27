/*Type your code here!*/
#include<stdio.h>
int main()
{
    int t,i,a,b,rem,x[2],n[2];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n[i],&x[i]);
    }
 
        for(i=0;i<t;i++)
        {
            if(n[i]%x[i]!=0)
            {
                a=n[i]/x[i];
                rem=n[i]-(a*x[i]);
            printf("%d\n",rem);
            }
            else
             {
                a=n[i]/x[i];
                b=a-1;
                rem=n[i]-(b*x[i]);
                printf("%d\n",rem);
            }
        }
    
    
    

    return 0;
}
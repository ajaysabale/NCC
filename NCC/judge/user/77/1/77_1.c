/*Type your code here!*/
#include<stdio.h>
int main()
{
    int n,x,t;
    int i;
    int b[2];
    printf("ENTER THE NUMBER OF CASES");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("ENTER THE AMOUNT OF MONEY IN HIS WALLET & COST OF EACH APPLE RESPECTIVELY");
        scanf("%d%d",&n,&x);
        b[i]=n%x;
    }
    
    for(i=0;i<t;i++)
    {
        if(b[i]==0)
        {
            printf("%d\n",x);
        }
        else
        {
         printf("%d\n",b[i]);
        }
    }
    return 0;
}
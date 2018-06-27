/*Type your code here!*/#include<stdio.h>
int main()
{
    int t,x1,x2,i,j,k,num=0;
    scanf("%d",&t);
    for(i<=1;i<=t;i++)
    {
        scanf("%d%d",&x1,&x2);
    
        for(j=x1;j<=x2;j++)
        {
            for(k=2;k<=j-1;j++)
            {
                if(j%k==0)
                break;
                if(k==j-1)
                {
                    num++;
                }
            }
        }
        printf("%d",num);
    }
    
    return 0;
}
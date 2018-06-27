/*Type your code here!*/#include<stdio.h>
int main()
{
    int a,b,d=0;
    int i,t,m;
    int j,c=0,k;
    printf("enter the number of cases/n");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("enter two numbers in ascending order\n");
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            for(k=2;k<j;k++)
            {
                m=j%k;
                if(m==0)
                {
                    c=1;
                    break;
                }
                
            }
            if(c!=0)
            {
                d++;
            }
        }
        printf("%d",d);
        
    }
    return 0;
}
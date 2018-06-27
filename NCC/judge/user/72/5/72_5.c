/*Type your code here!*/
#include<stdio.h>
int prime(int);

int main()
{
    int t=0,T,x1,x2;
    scanf("%d",&T);
    int a[T];
    int j=0;
	for(j;j<T;j++)
	{a[j]=0;}
    for(t=0;t<T;t++)
    {
        int i;
        scanf("%d %d",&x1,&x2);
        for(i=x1;i<=x2;i++)
        {
            a[t]=a[t]+prime(i);
        }
    }
    
    for(t=0;t<T;t++)
    {
        printf("%d\n",a[t]);
    }

    return 0;
}
int prime(int a)
{
    int i=2,c=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
        c++;
        break;
        }
    }
    if(c>0)
    return 0;
    else
    return 1;
}
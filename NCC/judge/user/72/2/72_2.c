/*Type your code here!*/
#include<stdio.h>

int max(int,int);

int main()
{
    
    int t=0;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int s[n];
        
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        
    }
    return 0;
}

int max(int a[],int n)
{
    int i=0;
    int max=a[0];
    for(i;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
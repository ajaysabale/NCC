/*Type your code here!*/
#include<stdio.h>

int main()
{
  long long int t;
    long long int i=0;
     scanf("%lld",&t);
    long long int a[t];
    for(i=0;i<t;i++)
    {
        long long int n,x;
        scanf("%lld%lld",&n,&x);
       // if(x<=1000000000&&x>=1&&n<=1000000000&&n>=1)
        a[i]=n%x;
       // printf("%d\n",a[i]);
    }
    //int j=0;
    for(i=0;i<t;i++)
    {
        printf("%lld\n",a[i]);
    }
    
    return 0;
}
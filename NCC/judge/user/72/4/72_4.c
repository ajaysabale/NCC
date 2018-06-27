/*Type your code here!*/
#include<stdio.h>
int main()
{
   
        long long int n,p=1,j;
        scanf("%lld",&n);
        for(j=0;j<n;j++)
        {
            p=p*2;
        }
        p=p%1000000007;
  
    printf("%lld\n",p);
    return 0;
}
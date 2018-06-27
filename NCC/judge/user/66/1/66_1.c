#include<stdio.h>
void main()
{
    int i,j,k,m;
    int n;
    printf("Enter the number of test cases\n");
    
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        printf("Enter amount in your wallet and cost of each apple\n");
        scanf("%d\t%d",&k,&m);
        n=k%m;
        printf("%d is the amount of money left\n  ",n);
    }
}
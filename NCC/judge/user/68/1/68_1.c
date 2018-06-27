/*Type your code here!*/#include<stdio.h>
int main()
{
	int n,x,i,t,r[100000];
	scanf("%d",&t);

	for(i=0;i<t;i++)
{
	scanf("%d %d",&n,&x);
	r[i]=n-(n/x)*x;

}
	for(i=0;i<t;i++)
	printf("\n%d",r[i]);
return 0;

}
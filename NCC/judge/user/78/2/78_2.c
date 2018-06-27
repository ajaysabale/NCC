/*Type your code here!*/#include<stdio.h>
void fun();
int main()
{
 int T,i;
 printf("T=%d:",T);
 scanf("%d",&T);
 	for(i=1;i<=T;i++)
	{
	fun();
	}		

 return 0;
}
void fun()
{
int n,i;
int num[10^5];
scanf("%d",&n);
printf("n=%d",n);
	for(i=1;i<n;i++)
	{
		scanf("%d",&num[i]);
		
	}

	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
		
		
	}




		
}
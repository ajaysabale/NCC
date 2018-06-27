/*Type your code here!*/#include<stdio.h>
void fun();
int main()
{
int T,i;
scanf("%d",&T);
printf("%d \n",T);
	for(i=0;i<T;i++)
		{
			fun();
		}
return 0;
}
void fun()
{
int N,X,z;
scanf("%d%d",&N,&X);
	z=N%X;
printf("%d",z);

}

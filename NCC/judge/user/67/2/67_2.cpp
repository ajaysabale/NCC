#include<iostream>
using namespace std;
int main()
{
int n1,n2;
int i,j,k;
int n,d;


cin>>n;
int arr[n];
for(k=0;k<n;k++)
{
cin>>n1>>n2;
d=0;
for(i=n1;i<=n2;i++)
{

for(j=2;j<i;j++)
{

if(i%j==0)
{
break;
}
}

if(i==j)
{
d++;
}

}
arr[k]=d;
}
for(k=0;k<n;k++)
{
cout<<arr[k]<<endl;

}
return 0;
}




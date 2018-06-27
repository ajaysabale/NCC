#include <iostream>
using namespace std;
struct saa
{
int n;
int x;
};
int main()
{
int i,j,t;
cin>>t;
struct saa s[t];
for(i=1;i<=t;i++)
{
cin>>s[i].n>>s[i].x;
}

for(i=1;i<=t;i++)
{
j=s[i].n%s[i].x;
cout<<j<<endl;
}
}


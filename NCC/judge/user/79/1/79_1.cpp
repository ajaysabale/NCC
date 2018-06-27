/*Type your code here!*/#include<iostream>
using namespace std;
int main()
{
    int t;
    int n,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>x>>endl;
        if(n%x==0)
            cout<<x<<endl;
        else
            cout<<n%x<<endl;
    }
    return 0;
}
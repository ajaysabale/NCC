/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
    int T,N;
    
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        string S;
        cin>>S;
        if(N%2==0)
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
}

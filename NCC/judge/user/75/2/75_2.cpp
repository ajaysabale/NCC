/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
    int T,N,S[20];
    cin>>T;
    cin>>N;
    for(int i=0;i<T;i++)
    {
        for(int p=0;p<N;p++)
        {
            cin>>S[p]; 
        }
        for(int q=0;q<N;q++)
         {
            for(int j=0;j<i;j++)
            {
                if(S[j]>S[q])
             {
                  S[q]=S[q]^S[j];
                S[j]=S[q]^S[j];
                S[q]=S[q]^S[j];
             }
            }
        }
    
        for(int r=0;r<3;r++)
        {
        cout<<S[r]<<" "<<endl;
        }
    }
         
    return 0;
}


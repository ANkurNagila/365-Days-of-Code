
#include<iostream>
#include<string>
using namespace std;

int food(int N,int D,int C,int M,string s)
{
    int flag=1;
    for(int i=0;i<N;i++)
        {
            if(s[i]=='D')
            {
                if(D==0)
                {
                    return 0;
                }
                else
                {
                    if(flag==0)
                    {
                        return 0;
                    }
                    D--;
                    C=C+M;
                }
            }
            else
            {
                if(C==0)
                {
                    flag=0;
                }
                else
                {
                    C--;
                }
            }
        }

        return 1;
}

int main()
{
    int t;
    cin>>t;
    int i=1;

    while(t--)
    {
        int N,D,C,M;
        cin>>N>>D>>C>>M;
        cin.ignore();

        string s;
        getline(cin,s);

        int ans=food(N,D,C,M,s);

        if(ans==1)
        {
            cout<<"Case #"<<i<<": YES"<<endl;
        }
        else
        {
            cout<<"Case #"<<i<<": NO"<<endl;
        }

        i++;

    }
}

#include<iostream>
#include<string>

using namespace std;

char arr[]={'d','f','j','k'};

int solve(string s)
{
    int time=2;
    int flag=0;

    if(s[0]=='d' or s[0]=='f')
    {
        flag=0;
    }
    else
    {
        flag=1;
    }


    for(int i=1;s[i]!='\0';i++)
    {
        if(s[i]=='d' or s[i]=='f')
        {
            if(flag==0)
                time+=4;
            else
                time+=2;
            flag=0;
        }
        else
        {
            if(flag==1)
                time+=4;
            else
                time+=2;
            flag=1;
        }
    }

    return time;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s[n];
        int i=0;

        int final_ans=0;
        int flag;

        while(n--)
        {
            cin>>s[i];
            int ans=solve(s[i]);

            flag=1;
            //cout<<endl;

            for(int j=0;j<i;j++)
            {
                //cout<<s[i]<<" "<<s[j]<<endl;
                if(not(s[i].compare(s[j])))
                {
                    flag=2;
                    break;
                }
            }

            //cout<<endl;


            final_ans=final_ans+(ans/flag);
            i++;

            //cout<<final_ans<<endl;
        }
        cout<<final_ans<<endl;
    }
}

#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

void solve(int i)
{
    int n;
    std::cin>>n;

    cin.ignore();
    string ans="";
    int max=0,count=0;

    while(n--)
    {
        string s;
        getline(cin,s);
        count=0;
        unordered_set<char> set;

        for(int i=0;i<s.size();i++)
        {
            if(set.find(s[i])!=set.end())
            {
                continue;
            }
            else
            {
                set.insert(s[i]);
                count++;
            }
        }

        if(count>max)
        {
            max=count;
            ans=s;
        }
        else if(count==max)
        {
            int ele=ans[0]-s[0];
            int x=1;
            while(ele!=0 and ans[x]!='\0' and s[x]!='\0')
            {
                ele=ans[x]-s[x];
                x++;
            }
            
            if(ele>0)
                ans=s;
        }

        set.clear();
    }

    std::cout<<"Case #"<<i<<": "<<ans;
}

int main()
{
    int t;
    std::cin>>t;

    int i=1;
    while(i<=t)
    {
        solve(i++);
        cout<<endl;
    }

}

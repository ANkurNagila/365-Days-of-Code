#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


int main()
{
    int m,n;
    std::cin>>m>>n;

    unordered_map <int,int> ans;

    int x=m;

    if(m!=n)
    {
        if(m>n)
          x=m;
        else
          x=n;
    }


    int arr[x][x];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>arr[i][j];
        }
    }



    int sum=0;

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(i<m and j<n)
            {
                int ele=arr[i][j];

                if(ans.find(ele)!=ans.end())
                {
                    auto it=ans.find(ele);

                    while(it!=ans.end() and it->first==ele)
                    {
                        it->second=(it->second)+1;
                        it++;
                    }
                    continue;
                }
                ans.insert(make_pair(arr[i][j],1));
                continue;
            }
            else
            {
                arr[i][j]=1;
                int ele=arr[i][j];

                if(ans.find(ele)!=ans.end())
                {
                    auto it=ans.find(ele);

                    while(it!=ans.end() and it->first==ele)
                    {
                        it->second=(it->second)+1;
                        it++;
                    }
                    continue;
                }
                ans.insert(make_pair(arr[i][j],1));
            }
        }
    }


    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            int ele=arr[i][j];
            if(i==j)
            {
                auto it=ans.find(ele);
                while(it!=ans.end() and it->first==ele)
                {
                    if(it->second>1)
                    {
                        sum=sum+arr[i][j];
                    }
                    it++;
                }
            }
        }
    }

    std::cout<<sum<<endl;

}

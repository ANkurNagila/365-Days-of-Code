#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;

	while(t--)
    {
        int n;
        cin>>n;

        vector <long long int> v1;
        vector <long long int> uncommon;
        vector <long long int> common;

        int flag=0;

        for(int i=0;i<n;i++)
        {
            long long int test;
            cin>>test;

            v1.push_back(test);
        }
        sort(v1.begin(),v1.end(),greater<int>());
       
        
        
        uncommon.push_back(v1[0]);
        for(int i=1;i<n;i++)
        {
            if(v1[i-1]==v1[i] and ((v1[i]==v1[i+1]) or i==1))
            {
                flag=1;
            }
            else if(v1[i-1]==v1[i] and v1[i]!=v1[i+1])
            {
                common.push_back(v1[i]);
            }
            else
            {
                uncommon.push_back(v1[i]);
            }
        }

        if(flag==0)
        {
            for(int i=common.size()-1;i>=0;i--)
                cout<<common[i]<<" ";

            for(int i=0;i<uncommon.size();i++)
                cout<<uncommon[i]<<" ";

        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;
    }

	return 0;
}


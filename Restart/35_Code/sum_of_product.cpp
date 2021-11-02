#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	long long int sumofproduct(int n)
	{
	    long long sum=0;
	    for(int i=1;i<=n;i++)
	    {
	        int y=floor(n/i);
	        sum=sum+i*y;
	    }
	    // Code here
	    return sum;
	}  
};

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    { 
      int n;
      cin>>n;
      Solution ob;
      long long int ans=ob.sumofproduct(n);
      cout<<ans<<endl;
    }
  return 0;
}

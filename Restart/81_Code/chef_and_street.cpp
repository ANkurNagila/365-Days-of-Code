#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int s[n],p[n],v[n];
	    int profit=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i]>>p[i]>>v[i];
	        int temp=(p[i]/(s[i]+1))*v[i];
	        
	        if(temp>profit)
	            profit=temp;
	        
	    }
	    
	    cout<<profit<<endl;
	    
	}
	
	return 0;
}

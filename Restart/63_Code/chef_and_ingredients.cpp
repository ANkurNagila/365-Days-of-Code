#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;


	while(t--)
	{

	    vector <int> ans(26,0);

	    int n;
	    cin>>n;
	    cin.ignore();

	    string s;
	    cin>>s;

	    for(int i=0;s[i]!='\0';i++)
	    {
	        int ele;
	        ele=s[i]-97;
	        ans[ele]++;
	    }
	    n--;

	    while(n--)
	    {
	        cin>>s;

	        vector <int> ans1(26,0);

	        for(int i=0;s[i]!='\0';i++)
    	    {
    	        int ele;
    	        ele=s[i]-97;
    	        ans1[ele]++;
    	    }

    	    for(int i=0;i<26;i++)
    	    {
    	        if(ans1[i]<ans[i])
    	        {
    	            ans[i]=ans1[i];
    	        }
    	    }

	    }

	    int sum=0;
	    for(int i=0;i<26;i++)
	    {
	        if(ans[i]!=0)
	            sum++;
	    }

	    cout<<sum<<endl;

	}

	return 0;
}


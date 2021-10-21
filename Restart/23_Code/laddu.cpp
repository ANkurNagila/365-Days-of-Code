#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	    string s[100];
	    int number;
	    string country;

	    cin>>number;
	    cin.ignore();
	    cin>>country;
	    cin.ignore();

	    int sum=0;

	    for(int i=0;i<number;i++)
	    {
	        cin>>s[i];
	        if(s[i]=="CONTEST_WON"){
	            int t1;
	            cin>>t1;
	            if(t1<20)
	            sum=sum+300+(20-t1);
	            else
                    sum=sum+300;
	        }
	        else if(s[i]=="TOP_CONTRIBUTOR")
	        {
	            sum=sum+300;
	        }

	        else if(s[i]=="BUG_FOUND")
	        {
	            int t2;
	            cin>>t2;
	            sum=sum+t2;
	        }
	        else
	        {
	            sum=sum+50;
	        }
	    }
	    //cout<<sum<<endl;
	    if(country=="INDIAN")
        {
            cout<<sum/200<<endl;
        }
        else
        {
            cout<<sum/400<<endl;
        }
	}
	return 0;
}


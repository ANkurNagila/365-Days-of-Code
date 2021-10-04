#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;
	    int *a=new int [n];
	    int *c=new int[n];
	    int old=0;

	    for(int i=0;i<n;i++)
	    {
	        //cout<<"Place c:";
	        cin>>*(a+i);
	        *(c+i)=*(a+i)-old;
	        old=*(a+i);
        }

	    int *b=new int [n];


	    for(int i=0;i<n;i++)
	    {
	        //cout<<"Place a:";
	        cin>>*(b+i);
	    }

	    int count=0;

	    for(int i=0;i<n;i++)
	    {
	        if(*(b+i)<=*(c+i))
	        {
	            count++;
	        }

	    }

	    cout<<count<<endl;
	    delete [] a;
	    delete [] b;
	    delete [] c;



	}
	return 0;
}


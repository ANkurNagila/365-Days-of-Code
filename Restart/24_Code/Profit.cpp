#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	long int arr[t];
	long int i=0;

	while(t--)
	{
	    cin>>arr[i];
	    i++;
	}

	sort(arr,arr+i);

	long int max=0;
	long int term;
	int size=i;
	//cout<<size<<endl;
	for(int j=0;j<i;j++)
	{
	    term=arr[j]*(size-j);
	    //cout<<arr[j]<<":"<<size<<":"<<j<<endl;
	    if(term>max)
	        max=term;
	}
	cout<<max<<endl;

	return 0;
}


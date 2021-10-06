#include <iostream>
#include<math.h>
using namespace std;

int special_case(int n,int bit)
{
    if((pow(2,bit)-1)==n)
        return true;
    return false;
    
}


int mex(int n,int bit)
{
    if(n==0)
    {
        return 1;
    }
    if(special_case(n,bit))
    {
        return n+1;
    }
    return pow(2,bit-1);
    
}


int bits(int n)
{
    int number=0;
    while(n!=0)
    {
        n=n>>1;
        number++;
    }
    return number;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int num_of_bits=bits(n);
	    int ans=mex(n,num_of_bits);
	    
	    cout<<ans<<endl;
	    
    }
	
	return 0;
}

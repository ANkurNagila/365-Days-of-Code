#include <iostream>
#include<math.h>
using namespace std;


int long_subarray(int n,int bits)
{
    int length1;
    int length2;
    int max;

    length1=n-(pow(2,bits-1)-1);
    length2=pow(2,bits-1)-pow(2,bits-2);

    if(length1>length2)
    {
        max=length1;
    }
    else
        max=length2;

    return max;

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

	    int number_of_bits;
	    number_of_bits=bits(n);

	    int ans;
	    ans=long_subarray(n,number_of_bits);



	    //cout<<number_of_bits<<endl;
	    cout<<ans<<endl;

	    //cout<<endl<<endl;

	}

	return 0;
}


#include <iostream>
using namespace std;

bool helper(int *input,int size,int l,int r)
{
    if(size==0 and l==r)
        return true;
    else if(size==0 and l!=r)
        return false;
    
    bool ans1,ans2;

    if(input[0]%5==0)
    {
        l=l+input[0];
        return helper(input+1,size-1,l,r);
    }
    else if(input[0]%3==0)
    {
        r=r+input[0];
        return helper(input+1,size-1,l,r);
    }
    else
    {
        ans1= helper(input+1, size-1, l + input[0], r);
        ans2=helper(input+1, size-1, l, r + input[0]);
    }

    if(ans1 or ans2)
        return true;
    
    else
        return false;


}

bool splitArray(int *input, int size) {

    int l=0,r=0;
    bool ans=helper(input,size,l,r);
    return ans;
}

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
	return 0;

}


#include <iostream>
#include<algorithm>
using namespace std;

void recursion(int n,int output[])
{
    if(n==1)
    {
        output[1]=1;
        output[0]++;
        return ;
    }


    int term;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            term=i;
            break;
        }
    }


    recursion(n/term,output);

    int ans=output[0];
    output[ans]=term;
    output[0]++;


}

int main() {
	// your code goes here

	int n;
	cin>>n;

	int output1[10000];

	output1[0]=1;
	recursion(n,output1);

	int size=output1[0];

	int ans[1000];
	int size1=0;
	int ans2[1000];
	int k=0;
	int pro;


	for(int i=1;i<size;i++)
    {
        pro=output1[i];
        for(int j=i+1;j<size;j++)
        {
            ans[k]=output1[i]*output1[j];
            pro=pro*output1[j];
            ans2[k]=pro;
            k++;
            size1++;
        }
    }

    for(int i=0;i<size1;i++)
    {
        ans[k+i]=ans2[i];
    }

    int ans_final[1000],size2;

    sort(ans,ans+2*size1);

    ans_final[0]=1;
    ans_final[1]=ans[0];
    size2=2;
    k=2;

    for(int i=1;i<2*size1;i++)
    {
        if(ans[i-1]!=ans[i])
        {
            ans_final[k]=ans[i];
            size2++;
            k++;
        }
    }

    cout<<size2<<endl;
    for(int i=0;i<size2;i++)
    {
        cout<<ans_final[i];
        if(i!=size2-1)
        {
            cout<<" ";
        }
    }


	return 0;
}


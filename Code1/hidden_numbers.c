#include <stdio.h>
#include<math.h>

int main(void) 
{
	int T;
	int N,flag;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    flag=0;
	    scanf("%d",&N);
	    for(int j=2;j<sqrt(N);j++)
	    {
	        if(N%j==0)
	        {
	            printf("%d %d\n",j,N/j);
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        printf("1 %d\n",N);
	    }
	}
	return 0;
}

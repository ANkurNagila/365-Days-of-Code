#include<stdio.h>
#include<math.h>

int main(void) {
	int T;
	int N,x,sum;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    scanf("%d",&N);
	    sum=0;
	    while(N>=1)
	    {
	        x=sqrt(N);
	        //printf("%d\t",x);
	        N=N-x*x;
	        sum++;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}


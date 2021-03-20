#include <stdio.h>

int main(void) {
	int T,N,K;
	
	scanf("%d",&T);
	
	int sum;
	
	for(int i=1;i<=T;i++)
	{
	    sum=0;
	    scanf("%d%d",&N,&K);
	    
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d",&A[i]);
	        sum=sum+A[i];
	    }
	    if(sum%K==0)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        printf("1\n");
	    }
	}
	
	return 0;
}


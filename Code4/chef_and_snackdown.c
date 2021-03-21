#include <stdio.h>

int main(void) {
	int T,N;
	
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
	    scanf("%d",&N);
	    
	    switch(N)
	    {
	        case 2010:
	            printf("HOSTED\n");
	            break;
	        case 2015:
	            printf("HOSTED\n");
	            break;
	        case 2016:
	            printf("HOSTED\n");
	            break;
	        case 2017:
	            printf("HOSTED\n");
	            break;
	        case 2019:
	            printf("HOSTED\n");
	            break;
	        default:
	            printf("NOT HOSTED\n");
	    }
	    
	}
	return 0;
}


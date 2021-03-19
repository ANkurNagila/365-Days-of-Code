#include <stdio.h>

int main(void) {
	int T,Arr[10],K;
	
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
	    for(int j=0;j<10;j++)
	    {
	        scanf("%d",&Arr[j]);
	    }
	    
	    scanf("%d",&K);
	    
	    for(int j=9;j>=0;j--)
	    {
	        if(Arr[j]>K)
	        {
	            Arr[j]=Arr[j]-K;
	            K=0;
	        }
	        else if(Arr[j]<K)
	        {
	            K=K-Arr[j];
	            Arr[j]=0;
	        }
	        else
	        {
	            Arr[j]=0;
	            K=0;
	        }
	        if(K==0 && Arr[j]!=0)
	        {
	            printf("%d\n",j+1);
	            break;
	        }
	    }
	    
	}
	
	return 0;
}


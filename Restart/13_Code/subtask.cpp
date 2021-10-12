#include <iostream>
using namespace std;

int main() {
	int tcase;
	cin>>tcase;
	while(tcase--){
	    int N,M,K;
	    cin>>N>>M>>K;
	    int A[N];
	    int count=0;
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    int i=0;
	    while(i<N)
	    {
	    	if(A[i]==1){
	            count++;
	        }
	        else if(A[i]==0){
	            break;
	        }
	        i++;
		}
	    if(count>=M && count<N)
	    {
	        cout<<K<<endl;
	    }
	    else if(count<M){
	        cout<<0<<endl;
	    }
	    else if(count==N){
	        
	    cout<<100<<endl;
	    }
	    
	}
	return 0;
}

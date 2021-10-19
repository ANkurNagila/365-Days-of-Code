#include <iostream>
using namespace std;

int subset(int input[], int n, int output[][20]) {
    // Write your code here
    if(n==0)
    {
        output[0][0]=0;
        return 1;
    }
    int col;
    int ans=subset(input+1,n-1,output);
    
    output[ans][0]=1;
    output[ans][1]=input[0];
    
    for(int i=1;i<ans;i++)
    {
        col = output[i][0];
        output[ans+i][0]=col+1;
        output[ans+i][1]=input[0];
        
        for(int j=1;j<=col;j++)
        {
            output[ans+i][j+1]=output[i][j];
        }
    }
    
    return 2*ans;
}


int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}

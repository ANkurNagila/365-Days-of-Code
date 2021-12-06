#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tcase;
    cin>>tcase;
    while(tcase--){
     
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     
     sort(arr,arr+n);
     
     int max=1,count=1;
     for(int i=1;i<n;i++){
         
         if(arr[i]==arr[i-1]){
             count++;
         }
         else{
              if(count>max){
                  max=count;
              }
              count=1;
         }
         
     }
     
     if(count>max){
                  max=count;
              }
    //cout<<max<<" ";
        
     if(n==1 or n==max){
         cout<<"0"<<endl;
     }    
     else if( max==1 ){
         cout<<"-1"<<endl;
     }
     else{
        cout<<n-(max-2)-1<<endl;    
     }
     
    }
	return 0;
}

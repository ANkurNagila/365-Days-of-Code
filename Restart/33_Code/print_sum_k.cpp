
#include <iostream>
#include<vector>
using namespace std;



void printSubsetSumToK(int input[], int size, int k,vector <int> v1={}) {
    // Write your code here
    if(k==0)
    {
        //cout<<k<<endl;
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        v1.clear();
        return ;
    }
    else if(k<0)
    {
        v1.clear();
        return ;
    }
    if(size==0)
    {
        return ;
    }

    v1.push_back(input[0]);
    printSubsetSumToK(input+1,size-1,k-input[0],v1);
    v1.pop_back();
    printSubsetSumToK(input+1,size-1,k,v1);


}


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    
    int n1;
    cin>>n1;
    
    arr.erase(arr.begin()+n1-1);
    
    int a,b;
    cin>>a>>b;
    arr.erase(arr.begin()+a-1,arr.begin()+b-1);
    
    vector<int>::iterator it;
    cout<<arr.size()<<endl;
    for(it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}

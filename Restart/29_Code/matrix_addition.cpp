#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector <vector <int> > v1;
    vector <vector <int> > v2;
    
    v1.push_back({1,2,3});
    v1.push_back({2,3,4});
    v1.push_back({1,1,1});
    
    v2.push_back({4,5,6});
    v2.push_back({7,8,9});
    v2.push_back({4,5,7});
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v1[i][j]+v2[i][j]<<endl;
        }
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string s;
    string s1,s2;
    
    int t;
    cin>>t;
    
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
    
        for(int i=0;s[i]!='\0';i++)
        {
            //cout<<s[i]<<" ";
            if(i%2==0)
                s1=s1+s[i];
            else {
                s2=s2+s[i];
            }
        }
        //cout<<endl;
        
        cout<<s1<<" "<<s2<<endl;
        s.clear();
        s1.clear();
        s2.clear();
        
    }
    
    return 0;
}

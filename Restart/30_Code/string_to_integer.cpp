#include <bits/stdc++.h>
using namespace std;



int main()
{
    string S;
    getline(cin, S);
    
    try {
    {
        int ans=stoi(S);
        
        std::cout<<ans<<endl;
    }
    } catch (...) {
        std::cout<<"Bad String"<<endl;
    }

    return 0;
}

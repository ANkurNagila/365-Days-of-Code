#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    int j;
    double e;
    string s1;
    
    // Read and save an integer, double, and String to your variables.
    cin>>j;
    cin>>e;
    cin.ignore();
    getline(cin,s1);
    
    s=s+s1;

    cout<<(i+j)<<endl;
    cout<<fixed << setprecision(1)<<(e+d)<<endl;
    cout<<s;
    
    return 0;

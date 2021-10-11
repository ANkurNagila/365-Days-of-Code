#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int new_int;
    double new_double;
    string new_string;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>new_int;
    cin>>new_double;
    getline(cin,new_string);
    
    // Print the sum of both integer variables on a new line.
    cout<<new_int+i<<endl;
    // Print the sum of the double variables on a new line.
    new_double=new_double+d;
    printf("%.1f\n",new_double);
    // Concatenate and print the String variables on a new line
    cout<<new_string<<endl;
    // The 's' variable above should be printed first.

    return 0;
}

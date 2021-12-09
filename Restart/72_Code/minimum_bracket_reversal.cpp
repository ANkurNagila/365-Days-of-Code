#include <iostream>
#include <string>
#include <stack>
using namespace std;

int countBracketReversals(string s) {
	// Write your code here
    if(s.length()%2!=0)
        return -1;
    
    stack<char> ans;
    
    for(int i=0;s[i]!='\0';i++)
    {
        if(ans.empty())
        {
            ans.push(s[i]);
        }
        else if(ans.top()=='{' and s[i]=='}')
        {
            ans.pop();
        }
        else
        {
            ans.push(s[i]);
        }
    }
    
    int ele=0;
    
    while(!ans.empty())
    {
        char c1=ans.top();
        ans.pop();
        char c2=ans.top();
        ans.pop();
        
        if(c1==c2)
            ele=ele+1;
        else
            ele=ele+2;
    }
    
    return ele;
    
}

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}

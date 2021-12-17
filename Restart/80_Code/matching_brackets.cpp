#include<iostream>
#include<stack>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    stack<int> ans;
    int arr[n];
    int start_index=0,value=0,brackets=0,bracket_index=0;
    int index=0;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
        if(arr[i]==1)
        {
            if(ans.empty())
            {
                index=i+1;
            }
            ans.push(arr[i]);
            count++;
        }
        else
        {
            count++;
            int val=ans.size();
            
            ans.pop();
            if(value<val)
            {
                value=val;
                start_index=i;
            }
            if(ans.empty())
            {
                if(brackets<count)
                {
                    bracket_index=index;
                    brackets=count;
                }
                count=0;
            }
        }
    }
    
    cout<<value<<" "<<start_index<<" "<<brackets<<" "<<bracket_index<<endl;
}

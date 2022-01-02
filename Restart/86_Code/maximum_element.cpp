#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) {
    
    vector<int> temp;
    vector<int> ans;
    stack<int> help;
    
    for(int i=0;i<operations.size();i++)
    {
        if(operations[i][0]=='1')
        {
            int ele=stoi(operations[i].substr(2,operations[i].size()-2));
            temp.push_back(ele);
            
            if(help.size()==0 or help.top()<=ele)
            {
                help.push(ele);
            }            
             
        }
        else if(operations[i][0]=='2')
        {
            if(help.top()==temp[temp.size()-1])
                help.pop();
            
            temp.pop_back();
        }
        else
        {
            ans.push_back(help.top());
        }
        
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

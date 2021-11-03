#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'gameWithCells' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int gameWithCells(int n, int m) {
    
    int numbers_of_houses=n*m;
    
    int row_divided=n/2;
    int col_divided=m/2;
    
    int paired_col=row_divided*col_divided;
    
    int extra_rows=(n%2)*m;
    int extra_cols=(m%2)*n;
    
    if(extra_cols==0 and extra_rows==0)
    {
        return paired_col;
    }
    else if(extra_rows!=0 and extra_cols!=0)
    {
        int sum=(extra_rows/2) + (extra_cols/2) +paired_col+1;
        return sum;   
    }
    else {
        int sum=(extra_rows/2) + (extra_cols/2) +paired_col;
        return sum; 
    }
    
    
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    int result = gameWithCells(n, m);

    fout << result << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

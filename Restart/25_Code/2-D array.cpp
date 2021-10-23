#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);





int main()
{

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
        }

        int arr2[6][4];
        int x=0,y=0;
        for(int i=0;i<6;i++,x++)
        {
            y=0;
            for(int j=0;j<4;j++)
            {
                int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2];
                arr2[x][y]=sum;
                y++;
            }
        }

        int max=-10000;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                int sum=arr2[j][i]+arr[j+1][i+1]+arr2[j+2][i];
                if(sum>max)
                    max=sum;
            }


        }
        cout<<max<<endl;


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


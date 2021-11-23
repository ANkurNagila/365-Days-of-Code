#include <bits/stdc++.h>
using namespace std;

int makeAnagram(string a, string b) {
    vector <int> a1(26);
    vector <int> b1(26);
    
    for(int i=0;i<a.length();i++)
    {
        a1[a[i]-97]++;
    }
    
    for(int i=0;i<b.length();i++)
    {
        b1[b[i]-97]++;
    }
    
    int count=0;
    for(int i=0;i<26;i++)
    {
        int ans=a1[i]-b1[i];
        if(ans<0)
            ans=-1*ans;
        count=count+ans;
    }
    
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);
    fout << res << "\n";
    fout.close();
    return 0;
}

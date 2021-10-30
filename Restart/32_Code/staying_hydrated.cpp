
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair <int,int> solve()
{
    int n;
    cin>>n;

    vector<int> x;
    vector<int> y;


    for(int i=0;i<n;i++)
    {
        int x1,y1;
        int x2,y2;

        cin>>x1>>y1>>x2>>y2;
        x.push_back(x1);
        x.push_back(x2);
        y.push_back(y1);
        y.push_back(y2);
    }

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    int mid;

    mid=x.size()/2;
    int ans1=x[mid-1];

    mid=y.size()/2;
    int ans2=y[mid-1];

    return make_pair(ans1,ans2);

}


int main()
{
    int t;
    cin>>t;
    int i=1;

    while(t--)
    {

        pair <int,int> t= solve();
        cout<<"Case #"<<i<<": "<<t.first<<" "<<t.second<<endl;
        i++;
    }
}

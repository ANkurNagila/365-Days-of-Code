#include<iostream>
#include<string>
using namespace std;

int maxi(int a,int b,int c,int d=-1)
{
    if(d!=-1)
    {
        if(a<b and a<c and a<d)
            return a;
        else if(b<a and b<c and b<d)
            return b;
        else if(c<a and c<b and c<d)
            return c;
        else
            return d;
    }
    else
    {
        if(b<a and b<c)
            return b;
        else if(c<a and c<b)
            return c;
        else
            return a;
    }
}


void solve(int arr[])
{
    int ans=maxi(arr[1],arr[3],arr[4]);
    arr[1]-=ans;
    arr[3]-=ans;
    arr[4]-=ans;


    int ans2=maxi(arr[0],arr[1],arr[2],arr[3]);

    string one=string(ans,'1');
    string zero=string(ans2,'0');
    string s=one+zero;

    for(int i=0;s[i]!='\0';i++)
        cout<<s[i]<<" ";

}

int main()
{
    int n;
    cin>>n;

    string s;
    cin.ignore();
    cin>>s;

    int arr[5]={0,0,0,0,0};
    string sample="zeron";

    int e;

    for(int i=0;s[i]!='\0';i++)
    {
        e=s[i];
        //cout<<e<<endl;
        if(e==101)
            arr[1]++;
        else if(e==122)
            arr[0]++;
        else if(e==114)
            arr[2]++;
        else if(e==111)
            arr[3]++;
        else
            arr[4]++;
    }


    solve(arr);


    //int result=solve(ans);
    //cout<<result<<endl;



}

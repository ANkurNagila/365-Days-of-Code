#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int i=2;
        long long int a;
        while(true)
        {
            a=((2*N)/i)-i+1;
            if((a%2==0) and (2*N)%i==0)
                break;
            i++;
        }
 
        cout<<a/2<<" "<<(a/2)+i-1<<endl;
    }
}

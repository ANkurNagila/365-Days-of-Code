#include <iostream>
#include <string>
using namespace std;

void printKeypad(int num,string output=""){

    if(num==0)
    {
        cout<<output<<endl;
        return ;
    }

    string a;
    a="abc";
    int k=(num%10);

    if(num%10<=1)
    {
        return ;
    }
    else if(k<=6){
        a[0]=a[0]+(k-2)*3;
        a[1]=a[1]+(k-2)*3;
        a[2]=a[2]+(k-2)*3;
    }
    else if(k==7)
    {
        a="pqrs";
    }
    else if(k==8)
    {
        a="tuv";
    }
    else
    {
        a="wxyz";
    }

    string small_ans;

    for(int i=0;a[i]!='\0';i++)
    {
        //cout<<a[i]<<" ";
        small_ans=a[i]+output;
        printKeypad(num/10,small_ans);
    }


}


int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}

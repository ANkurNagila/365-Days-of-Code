#include <iostream>
using namespace std;


void replacePi(char input[]) { 
    if(input[1]=='\0')
    {
        return ;
    }

    replacePi(input+1);

    if(input[0]=='p' and input[1]=='i' )
    {
        int i=0;

        while(input[i]!='\0')
        {
            i++;
        }

        while(i>=0)
        {
            input[i+2]=input[i];
            i--;
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

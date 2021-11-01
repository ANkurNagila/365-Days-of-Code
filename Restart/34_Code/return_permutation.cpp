#include <iostream>
#include <string>
using namespace std;

int returnPermutations(string input,string output[], string ans="",int size=0){
   	if(input[0]=='\0')
    {
        output[size]=ans;
        ans="";
        size=size+1;
        return size;
    }
    
    for(int i=0;i<input.size();i++)
    {
        string next;
        next=input.substr(0,i)+input.substr(i+1);

        int short_value = returnPermutations(next,output,ans+input[i],size);
        size=short_value;

    }
    return size;
}

int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

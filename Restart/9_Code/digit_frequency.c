#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1000];
    
    scanf("%s",&s);
    
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=0;
    }
    
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]<60)
        {
            arr[s[i]-48]++;
        }
    }
    
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

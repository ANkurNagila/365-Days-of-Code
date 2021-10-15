#include<iostream>
using namespace std;


int partition(int *input,int size)
{
    int count=0;
    for(int i=1;i<size;i++)
    {
        if(input[i]<input[0])
            count++;
    }

    return count;
}



void quickSort(int input[], int size) {

    if(size<=1)
        return ;

    int index=partition(input,size);
    cout<<input[index]<<endl;


    int temp=input[0];
    input[0]=input[index];
    input[index]=temp;


    for(int i=0,j=index+1;i<index and j<size;)
    {
        if(input[i]<input[index] and input[j]>=input[index])
        {
            i++;
            j++;
        }
        else if(input[i]<input[index])
            i++;
        else if(input[j]>=input[index])
            j++;
        else
        {
            temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j++;
        }
    }

    int input1[index];
    int k=0;
    for(int i=0;i<index;i++)
    {
        input1[i]=input[k];
        k++;
    }
    k++;

    int input2[size-index-1];
    for(int i=0;i<size-index-1;i++)
    {
        input2[i]=input[k];
        k++;
    }


    quickSort(input1,index+1);
    quickSort(input2,size-index+1);

}

int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    delete [] input;

}




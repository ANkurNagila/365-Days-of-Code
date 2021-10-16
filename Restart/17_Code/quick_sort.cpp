#include<iostream>
using namespace std;


int partition(int input[],int size,int pos=0)
{
    int cou=0;
    for(int i=1;i<size;i++)
    {
        if(*(input+i)<(*(input)))
        {
            cou++;
        }
    }
    return cou;
}



void quickSort(int input[], int size)
{
    if(size<=1)
        return;

    int index=partition(input,size);


    if(index==0)
    {
        quickSort(input+1,size-1);
    }
    else
    {
        int temp=input[0];
        input[0]=input[index];
        input[index]=temp;

        int input1[index],pivot=input[index],input2[size-index-1];
        int k=0;
        for(int i=0;i<index;i++)
        {
            input1[i]=input[k];
            k++;
        }

        k++;
        for(int j=0;j<(size-index-1);j++)
        {
            input2[j]=input[k];
            k++;
        }


        int i=0,j=0;
        while(i<index and j<(size-index-1))
        {
            if(input1[i]>=input[index] and input2[j]<input[index])
            {
                int temp1=input1[i];
                input1[i]=input2[j];
                input2[j]=temp1;
                i++;
                j++;
            }
            else if(input1[i]<input[index])
            {
                i++;
            }
            else if(input2[j]>=input[index])
            {
                j++;
            }
        }

        quickSort(input1,index);
        quickSort(input2,size-index-1);

        k=0;
        for(int i=0;i<index;i++)
        {
            input[k]=input1[i];
            k++;
        }

        k++;
        for(int j=0;j<(size-index-1);j++)
        {
            input[k]=input2[j];
            k++;
        }
    }
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




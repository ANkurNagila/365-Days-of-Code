#include <iostream>
using namespace std;

void print(int *input,int size)
{
    for(int i=0;i<size;i++)
        cout<<*(input+i)<<" ";
    cout<<endl;
}

void merge(int *arr1,int size1,int *arr2,int size2,int *arr)
{
    int a=0,b=0;
    int i=0;

    while(a<size1 and b<size2)
    {
        if(*(arr1+a)<(*(arr2+b)))
        {
            *(arr+i)=(*(arr1+a));
            a++;
            i++;
        }
        else
        {
            *(arr+i)=(*(arr2+b));
            b++;
            i++;
        }
    }

    if(a<size1)
    {
        for(;a<size1;a++)
        {
            *(arr+i)=(*(arr1+a));
            i++;
        }
    }
    else
    {
        for(;b<size2;b++)
        {
            *(arr+i)=(*(arr2+b));
            i++;
        }
    }

}


void mergeSort(int input[], int size){
	// Write your code here

	int mid=size/2;

	if(mid<=0)
        return ;

	int input1[mid];
	int input2[size-mid];

	for(int i=0;i<mid;i++)
        input1[i]=input[i];

    for(int i=0,k=mid;k<size;k++,i++)
        input2[i]=input[k];


    //print(input1,mid);
    //print(input2,size-mid);

    mergeSort(input1,mid);
    mergeSort(input2,size-mid);
    merge(input1,mid,input2,size-mid,input);
    print(input,size);
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}

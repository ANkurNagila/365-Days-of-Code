#include <iostream>
using namespace std;

int findUnique(int *arr, int n) {
    
    int x=0; // number of bits common bits;
    
    for(int i=0;i<n;i++)
    {
        x=x^arr[i];
    }
    return x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}

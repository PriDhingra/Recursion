#include<iostream>

using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i < n;i++) 
        cout<<arr[i]<<" ";
}

void bubbleSort(int *arr, int n) {
    if(n == 0 || n == 1) 
        return;

    for(int i = 0;i < n - 1;i++) {
        if(arr[i] > arr[i + 1]) 
            swap(arr[i], arr[i + 1]);
    }

    bubbleSort(arr, n - 1);
}

int main() {
    int arr[] = {5, 1, 8, 2, 0, 11};

    bubbleSort(arr, 6);
    printArray(arr, 6);

    return 0;
}

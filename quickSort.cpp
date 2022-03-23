#include<iostream>

using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i <= n;i++) 
        cout<<arr[i]<<" ";
}

int partition(int *arr, int start, int end) {
    int pivotElement = arr[start];
    int count = 0;

    for(int i = start + 1;i <= end;i++) {
        if(arr[i] <= pivotElement) {
            count++;
        }
    }

    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    int temp1 = start;
    int temp2 = end;

    while(temp1 < pivotIndex && temp2 > pivotIndex) {
        
        while(arr[temp1] < pivotElement) {
            temp1++;
        }

        while(arr[temp2] > pivotElement) {
            temp2--;
        }

        if(temp1 < pivotIndex && temp2 > pivotIndex) {
            swap(arr[temp1++], arr[temp2--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int start, int end) {
    if(start >= end)
        return;

    int pivotIndex = partition(arr, start, end);
    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);    
}

int main() {
    int arr[] = {3, 1, 4, 5, 2};

    quickSort(arr, 0, 4);
    printArray(arr, 4);

    return 0;
}

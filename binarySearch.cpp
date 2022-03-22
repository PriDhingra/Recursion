#include<iostream>

using namespace std;

int binarySearch(int *arr, int start, int end, int size, int key) {

    if(size == 0) 
        return -1;

    int mid = start + (end - start) / 2;
    if(arr[mid] == key) 
        return mid + 1;
    else if(arr[mid] > key) 
        return binarySearch(arr, start, mid - 1, size, key);
    else    
        return binarySearch(arr, mid + 1, end, size, key);

}

int main() {
    int arr[] = {1, 3, 6, 10, 12, 18};

    cout<<"Element found at position "<<binarySearch(arr, 0, 5, 6, 3);

    return 0;
}

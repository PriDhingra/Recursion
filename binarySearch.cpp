#include<iostream>

using namespace std;

int binarySearch(int *arr, int start, int end, int key) {

    if(start > end) 
        return -1;

    int mid = start + (end - start) / 2;
    if(arr[mid] == key) 
        return mid + 1;
    else if(arr[mid] > key) 
        return binarySearch(arr, start, mid - 1, key);
    else    
        return binarySearch(arr, mid + 1, end, key);

}

int main() {
    int arr[] = {1, 3, 6, 10, 12, 18};

    cout<<"Element found at position "<<binarySearch(arr, 0, 5, 3);

    return 0;
}

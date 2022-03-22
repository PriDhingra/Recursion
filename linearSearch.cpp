#include<iostream>

using namespace std;

int linearSearch(int *arr, int size, int key) {

    if(size == 0)
        return -1;

    if(arr[size - 1] == key)
        return size;
    else {
        int ans = linearSearch(arr, size - 1, key);
        return ans;
    }
}

int main() {
    int arr[] = {12, 4, 6, 19, 11, 13};

    int result = linearSearch(arr, 6, 6);

    if(result >= 0) 
        cout<<"Element found at position "<<result;
    else    
        cout<<"Element not found";

    return 0;
}

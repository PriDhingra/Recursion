#include<iostream>

using namespace std;

bool isArraySorted(int *arr, int size) {
    if(size == 0 || size == 1)
        return true;

    if(arr[size - 1] > arr[size - 2]) {
        bool ans = isArraySorted(arr, size - 1);
        return ans;
    }
    else
        return false;

}

int main() {
    int arr[] = {2, 4, 6, 9, 11, 13};

    bool result = isArraySorted(arr, 6);

    if(result) 
        cout<<"Array is sorted";
    else    
        cout<<"Array is not sorted";

    return 0;
}

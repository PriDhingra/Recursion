#include<iostream>

using namespace std;

int arraySum(int *arr, int size) {

    if(size - 1 == 0)
        return arr[size - 1];

    int sum = arr[size - 1] + arraySum(arr, size - 1);
    return sum;
}

int main() {
    int arr[] = {1, 3, 6, 10, 2};

    cout<<"Sum of array elements is "<<arraySum(arr, 5);

    return 0;
}

#include<iostream>

using namespace std;
string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void sayDigits(int num) {
    if(num == 0)
        return;

    int temp = num % 10;
    sayDigits(num / 10);
    cout<<arr[temp]<<" ";
}

int main() {
    int num = 459;

    sayDigits(num);

    return 0;
}

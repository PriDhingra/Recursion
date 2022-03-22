#include<iostream>

using namespace std;

void reverseString(string &str, int start) {
    if(start > (str.length() - 1) / 2) 
        return;

    swap(str[start], str[str.length() - 1 - start]);
    start++;
    reverseString(str, start);
}

int main() {
    string str = "prince";

    reverseString(str, 0);
    cout<<"Reverse string using recursion "<<str;

    return 0;
}

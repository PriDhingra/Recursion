#include<iostream>

using namespace std;

void reverseString(string &str, int start, int end) {
    if(start > end) 
        return;

    swap(str[start], str[end]);
    start++;
    end--;
    reverseString(str, start, end);

}

int main() {
    string str = "prince";

    reverseString(str, 0, str.length() - 1);
    cout<<"Reverse string using recursion "<<str;

    return 0;
}

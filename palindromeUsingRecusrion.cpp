#include<iostream>

using namespace std;

bool isPalindrome(string &str, int start) {
    if(start > (str.length() - 1) / 2) 
        return true;

    if(str[start] == str[str.length() - 1 - start]) {
        bool ans = isPalindrome(str, start + 1);
        return ans;
    } else  
        return false;
    
}

int main() {
    string str = "abcba";

    bool result = isPalindrome(str, 0);
    if(result) 
        cout<<"String is palindrome";
    else
        cout<<"String is not palindrome";

    return 0;
}

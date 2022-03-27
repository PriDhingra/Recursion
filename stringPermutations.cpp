#include<iostream>
#include<vector>

using namespace std;

string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void permutations(string str, int index, vector<string> &result) {
    if(index >= str.length()) {
        result.push_back(str);
        return;
    }

    for(int i = index; i <= str.length() - 1;i++) {
        swap(str[i], str[index]);
        permutations(str, index + 1, result);
        swap(str[i], str[index]);
    }
}

int main() {
    string str = "abcdef";

    vector<string> result;
    int index = 0;

    permutations(str, index, result);
    for(int i = 0; i < result.size();i++) 
        cout<<result[i]<<" "<<endl;

    return 0;
}

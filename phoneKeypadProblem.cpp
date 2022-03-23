#include<iostream>
#include<vector>

using namespace std;

string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void phoneKeypad(string str, string output, int index, vector<string> &result) {
    if(index >= str.length()) {
        result.push_back(output);
        return;
    }

    int temp = str[index] - '0';
    string temp2 = mapping[temp];
    for(int i = 0;i < temp2.length();i++) {
        output += temp2[i];
        phoneKeypad(str, output, index + 1, result);
        output = output.substr(0, output.length() - 1);
    }
}

int main() {
    string str = "729";

    string output = "";
    vector<string> result;
    int index = 0;

    phoneKeypad(str, output, index, result);

    for(int i = 0; i < result.size();i++) 
        cout<<result[i]<<" "<<endl;

    return 0;
}

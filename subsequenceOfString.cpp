#include<iostream>
#include<vector>

using namespace std;

void powerSets(string str, string output, int index, vector<string> &result) {
    if(index >= str.length()) {
        if(output.length() != 0) 
            result.push_back(output);
        return;
    }

    powerSets(str, output, index + 1, result); 
    output = output + str[index];
    powerSets(str, output, index + 1, result);
}

int main() {
    string str = "abcdef";

    vector<string> result;
    string output = "";
    int index = 0;
    powerSets(str, output, index, result);

    for (int i = 0; i < result.size(); i++) {
        cout<<result[i]<<endl;
    }

    return 0;
}

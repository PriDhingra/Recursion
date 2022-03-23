#include<iostream>
#include<vector>

using namespace std;

void powerSets(vector<int> vect, vector<int> output, int index, vector<vector<int>> &result) {
    if(index >= vect.size()) {
        result.push_back(output);
        return;
    }

    powerSets(vect, output, index + 1, result); 
    output.push_back(vect[index]);
    powerSets(vect, output, index + 1, result);
}

int main() {
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(3);
    vect.push_back(3);

    vector<vector<int>> result;
    vector<int> output;
    int index = 0;
    powerSets(vect, output, index, result);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}

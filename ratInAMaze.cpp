#include<iostream>
#include<vector>

using namespace std;

string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

bool isSafe(int newX, int newY, int size, vector<vector<int>> &vect, vector<vector<int>> &visited) {
    if((newX >= 0 && newX < size) && (newY >= 0 && newY < size) && visited[newX][newY] == 0 && vect[newX][newY] == 1) {
        return true;
    } else {
        return false;
    }
}

void ratInAMaze(vector<vector<int>> &vect, vector<vector<int>> &visited, int srcX, int srcY, int size, vector<string> &result, string output) {

    if(srcX == size - 1 && srcY == size - 1) {
        result.push_back(output);
        return;
    }   

    visited[srcX][srcY] = 1; 

    int newX = srcX + 1;
    int newY = srcY;
    if(isSafe(newX, newY, size, vect, visited)) {
        output += "D";
        ratInAMaze(vect, visited, newX, newY, size, result, output);
        output.pop_back();
    }

    newX = srcX;
    newY = srcY + 1;
    if(isSafe(newX, newY, size, vect, visited)) {
        output += "R";
        ratInAMaze(vect, visited, newX, newY, size, result, output);
        output.pop_back();
    }

    newX = srcX - 1;
    newY = srcY;
    if(isSafe(newX, newY, size, vect, visited)) {
        output += "U";
        ratInAMaze(vect, visited, newX, newY, size, result, output);
        output.pop_back();
    }

    newX = srcX;
    newY = srcY - 1;
    if(isSafe(newX, newY, size, vect, visited)) {
        output += "L";
        ratInAMaze(vect, visited, newX, newY, size, result, output);
        output.pop_back();
    }


    visited[srcX][srcY] = 0; 
}

int main() {
    vector<vector<int>> vect= {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<vector<int>> visited= {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    vector<string> result;
    string output ="";
    int srcX = 0;
    int srcY = 0;

    ratInAMaze(vect, visited, srcX, srcY, 4, result, output);
    for(int i = 0; i < result.size();i++) {
        cout<<result[i]<<endl;
    }

    return 0;
}

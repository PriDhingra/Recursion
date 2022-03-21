#include<iostream>

using namespace std;
int count = 0;

int stairClimb(int num) {
    if(num < 0) 
        return 0;

    if(num == 0)
        return 1;

    int ans = stairClimb(num - 1) + stairClimb(num - 2);

    return ans;
}

int main() {
    int num = 3;

    cout<<stairClimb(num);

    return 0;
}

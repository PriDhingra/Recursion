#include<iostream>

using namespace std;

int powerOfTwo(int num) {
    if(num == 0) 
        return 1;
    else    
        return 2 * powerOfTwo(num - 1);
}

int main() {
    int num = 10;

    cout<<"2 ki power "<<num<<" is "<<powerOfTwo(num);

    return 0;
}

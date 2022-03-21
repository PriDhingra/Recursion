#include<iostream>

using namespace std;

void printCount(int num) {
    if(num == 0) 
        return;
    
    printCount(num - 1);
    cout<<num<<endl;
}

int main() {
    int num = 10;

    printCount(num);

    return 0;
}

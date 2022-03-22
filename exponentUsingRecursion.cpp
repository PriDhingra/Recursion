#include<iostream>

using namespace std;

int exponent(int num1, int num2) {
    if(num2 == 1)
        return num1;

    if(num2 % 2 == 0) {
        return exponent(num1 * num1, num2>>1); 
    } else {
        return num1 * exponent(num1 * num1, num2>>1);
    }
}

int main() {
    int num1 = 2;
    int num2 = 10;

    cout<<exponent(num1, num2);

    return 0;
}

#include <iostream>
using namespace std;


/*
完美数：如果一个大于1的正整数的所有因子之和等于它本身，则称这个数是完美数
*/


bool isPerfectNumber(int x) {
    int sum = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }
    return sum == x;
}

int main() {
    for (int i = 2; i <= 1000; i++) {
        if (isPerfectNumber(i)) {
            cout << i << ' ';
        }
    }
    cout << endl;
    return 0;
}
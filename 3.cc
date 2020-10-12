#include <iostream>
using namespace std;

// 编写一个程序  输入20个数字 统计正数 负数 0的个数

int main() {
  cout << "请输入20个数字:";
  int x;

  int negative=0, positive=0, zero=0;
  for (int i=0; i<20; ++i) {
    cin >> x;
    if (x < 0) {
      negative ++;
    } else if(x > 0) {
      positive ++;
    } else if (x == 0) {
      zero ++;
    }
  }
  cout << "正数的个数:" << positive << endl;
  cout << "负数的个数:" << negative << endl;
  cout << "零的个数:" << zero << endl;
  return 0;
}
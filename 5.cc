#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
// 编写程序 打印出所有的水仙花数 水仙花数是指一个三位数 各位数字立方之和等于其本身

int main() {
  vector<int> res;
  for (int i=100; i<=999; ++i) {
    if (pow(i%10, 3)+pow(i/10%10,3)+pow(i/100,3) == i)
      res.push_back(i);
  }
  for_each(res.begin(), res.end(), [](int x) {cout << x << " ";});
  return 0;
}
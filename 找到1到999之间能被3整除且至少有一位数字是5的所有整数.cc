#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 找到1到999之间能被3整除且至少有一位数字是5的所有整数


bool hasFive(int x) {
  while (x) {
    if (x%10==5) return true;
    x /= 10;
  }
  return false;
}

int main() {
  vector<int> ans;
  for (int i=1; i<=999; ++i) {
    if (i%3==0 && hasFive(i)) ans.push_back(i);
  }
  for_each(ans.begin(), ans.end(), [](int x){cout << x << " ";});
  return 0;
}
/*
 * @Description: 返回数字n从右向左第K位的值
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-11 22:00:16
 */
#include <bits/stdc++.h>
using namespace std;


int digit(int n, int k) {
  // 首先将n转换为一个字符串 
  string s = to_string(n);
  if (k > s.size()) return -1;
  int begin = s.size();
  while (k --) {
    begin --;
  }
  return s[begin]-'0';
}

int main() {
  cout << digit(25469, 3) << endl;
  cout << digit(724, 4) << endl;
  return 0;
}
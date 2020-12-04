/*
 * @Description: 递归倒序输出一个十进制数 
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 15:39:34
 */
#include <bits/stdc++.h>
using namespace std;


void print(int x) {
  if (x < 10) {
    cout << x;
  } else {
    cout << x%10;
    print(x/10);
  }
}

int main() {
  int n;
  cin >> n;
  print(n);
  cout << endl;
  return 0;
}
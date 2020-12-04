/*
 * @Description: 拷贝字符串
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 01:45:01
 */
#include <bits/stdc++.h>
using namespace std;

void copystr(char *a, char *b, int m) {
  int i = 0;
  int k = 0;
  while (i < m) i ++;
  while (a[i] != '\0') {
    b[k ++] = a[i ++];
  }
}

const int N=100;


int main() {
  char a[N];
  char b[N];
  cout << "请输入源字符串:" << endl;
  cin >> a;
  cout << "请输入拷贝的位置:" << endl;
  int m;
  cin >> m;
  if (strlen(a) < m) {
    cout << "m不合法" << endl;
  } else {
    copystr(a, b, m);
    cout << "拷贝后的字符串为:" << b << endl;
  }
  return 0;
}


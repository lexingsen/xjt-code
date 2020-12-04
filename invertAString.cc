/*
 * @Description: 输入 输出 字符串反转
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 13:57:05
 */
#include <bits/stdc++.h>
using namespace std;

void reverse(char *s) {
  int l=0, r=strlen(s)-1;
  while (l < r) {
    swap(s[l ++], s[r --]);
  }
}

const int N=100;




int main() {
  char s[N];
  cout << "请输入字符串:" << endl;
  cin >> s;
  reverse(s);
  cout << "反转之后的字符串:" <<  s << endl;
  return 0;
}
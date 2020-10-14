/*
 * @Description: 实现strlen函数
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 12:51:04
 */
#include <bits/stdc++.h>
using namespace std;


int my_strlen(const char *p) {
  int res = 0;
  if (!p) return 0;
  int i = 0;
  while (p[i] != '\0') {
    res ++;
    i ++;
  }
  return res;
}



int main() {
  cout << my_strlen("helloworld") << endl;
  cout << my_strlen("") << endl;
  cout << my_strlen("-") << endl;
  cout << my_strlen("ni hao, shi jian") << endl;
  return 0;
}


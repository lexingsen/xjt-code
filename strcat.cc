/*
 * @Description: 字符串连接 
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-13 11:46:08
 */
#include <bits/stdc++.h>
using namespace std;


char *my_strcat(const char *a, const char *b) {
  if (!a) return (char*)b;
  if (!b) return (char*)a;
  int n = strlen(a),m = strlen(b);
  int i = 0, j = 0, k =0;
  char *res = new char[n+m+1];
  while (i < n) {
    res[k ++] = a[i ++];
  }
  while (j < m) {
    res[k ++] = b[j ++];
  }
  res[k] = '\0';
  return res;
}

int main() {
  char a[] = "hello";
  char b[] = "world";
  char *res = my_strcat(a,b);
  cout << my_strcat(a, b) << endl;
  delete res;
  return 0;
}


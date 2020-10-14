/*
 * @Description: 在s1中查找s1首次出现的位置 串的模式匹配
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 15:43:14
 */
#include <bits/stdc++.h>
using namespace std;

const int N=100;
int Next[N];


int bf(char *a, char *b) {
  int n = strlen(a);
  int m = strlen(b);
  int i=0,j=0,k=0;
  while (i < n && j < m) {
    if (a[i] == b[j]) {
      i ++;
      j ++;
    } else {
      j = 0;
      i = ++k;
    }
  }
  if (j >= strlen(b)) {
    return k;
  } else {
    return -1;
  }
}

int main() {
  char a[] = "helloworld";
  char b[] = "he";
  cout << bf(a,b) << endl;
  return 0;
}
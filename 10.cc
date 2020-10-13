/*
 * @Description: 用指针数组和指向指针的指针实现对是个字符串排序
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 01:29:13
 */
#include <bits/stdc++.h>
using namespace std;

const int N=10;
char *a[N] = {
  "China", "America", "England", "Japan",
  "Russia", "France", "Germany", "Spain", "Italy",
  "Australia"
};

void bubbleSort(char *s[], int n) {
  int i,j;
  bool flag;
  for (i=0; i<n-1; ++i) {
    flag = false;
    for (j=0; j<n-1-i; ++j) {
      if (strcmp(*(s+j), *(s+j+1)) > 0) {
        flag = true;
        char *t = *(s+j);
        *(s+j) = *(s+j+1);
        *(s+j+1) = t;
      }
    }
    if (!flag) break;
  }
}

void print(int n) {
  for (int i=0; i<n; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int n = sizeof(a)/sizeof(char*);
  bubbleSort(a, n);
  print(n);
  return 0;
}



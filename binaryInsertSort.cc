/*
 * @Description: 折半插入排序
 * @Language: lexingsen
 * @Author: c++
 * @Date: 2020-11-16 00:21:41
 */
#include <bits/stdc++.h>
using namespace std;

void binaryInsertSort(int *a, int n) {
  for (int i=1; i<n; ++i) {
    int l=0, r=i-1;
    while (l <= r) {
      int m = (r-l)/2 + l;
      if (a[i] <= a[m]) r = m-1;
      else l = m+1;
    }
    int x = a[i];
    for (int j=i; j>l; j--) a[j] = a[j-1];
    a[l] = x;
  }
}

int main() {
  int a[] = {3,1,4,5,2};
  int n = sizeof(a)/sizeof(int);
  binaryInsertSort(a, n);
  for_each(a, a+n, [](int x) {cout << x << " ";});
  cout << endl;
  return 0;
}
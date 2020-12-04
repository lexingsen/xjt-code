/*
 * @Description: 反转数组
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-11-16 00:01:45
 */
#include <bits/stdc++.h>
using namespace std;


void reverse(int *a, int n) {
  for (int i=0; i<n/2; ++i) {
    swap(a[i], a[n-1-i]);
  }
}


void print(int *a, int n) {
  for (int i=0; i<n; ++i) 
    cout << a[i] << " ";
  cout << endl;
}


int main() {
  int a[] = {1,2,3,4,5};
  int n = sizeof(a)/sizeof(int);
  print(a, n);
  reverse(a, n);
  print(a, n);
  return 0;
}
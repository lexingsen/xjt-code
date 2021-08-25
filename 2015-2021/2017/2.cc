/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-11-07 07:56:43
 */
#include <bits/stdc++.h>
using namespace std;



int binSearch(int *a, int l, int r, int x) {
  while (l <= r) {
    int m = (r-l)/2 + l;
    if (a[m] == x) return m;
    else if (x < a[m]) r = m-1;
    else l = m+1;
  }
  return -1;
}


int main() {
  int a[] = {1,2,3,4,5,6,7,8,9};
  int n = sizeof(a)/sizeof(int);
  cout << binSearch(a, 0, n-1, 1) << endl;
  cout << binSearch(a, 0, n-1, 9) << endl;
  cout << binSearch(a, 0, n-1, 5) << endl;
  cout << binSearch(a, 0, n-1, 99) << endl;
  return 0;
}
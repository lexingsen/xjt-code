                                            /*
 * @Description: 从键盘输入是个整型数字 去掉重复的 将剩下从大到小排序 
 * @Language: 
 * @Author: 
 * @Date: 2020-10-14 12:54:27
 */
#include <bits/stdc++.h>
using namespace std;

const int N=10;
int arr[N];
int cnt=0;

set<int> s;


void bubbleSort(int *a, int n) {
  int i=0,j=0;
  bool flag = false;
  for (i=0; i<n-1; ++i) {
    flag = false;
    for (j=0; j<n-1-i; ++j) {
      if (a[j] < a[j+1]) {
        flag = true;
        swap(a[j], a[j+1]);
      }
    }
    if (!flag) break;
  }
}


int main() {
  for (int i=0; i<N; ++i) {
    int a;
    cin >> a;
    s.insert(a);
  }

  for (auto x:s) {
    arr[cnt ++] = x;
  }
  bubbleSort(arr, cnt);
  for_each(arr, arr+cnt, [](int a) {cout << a << " ";});
  return 0;
}
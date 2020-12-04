/*
 * @Description: 求给定的五个数中的最大值
 * @Language: 
 * @Author: 
 * @Date: 2020-10-14 14:59:45
 */
#include <bits/stdc++.h>
using namespace std;

int maxabc(int a, int b, int c) {
  int t = max(a,b);
  return max(t, c);
}

int main() {
  int a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;
  int t1 = maxabc(a, b, c);
  int t2 = max(t2, d, e);
  cout << t2 << endl;
  return 0;
}
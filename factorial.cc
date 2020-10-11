/*
 * @Description: 递归求阶乘
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-11 21:56:03
 */
#include <bits/stdc++.h>
using namespace std;

// 当n较大时 会出现爆栈的情况
int factorial(int n) {
  if (n == 0) return 1;
  else return n*factorial(n-1);
}

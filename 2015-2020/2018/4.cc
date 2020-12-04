/*
 * @Description: n个相同的球，m相同的盒子，盒子允许空，求总的防止方法
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-11-06 21:18:19
 */
#include <bits/stdc++.h>
using namespace std;


/*
n个相同的小球，放入m个相同的箱子，允许有箱子空，求共有多少种分配的方法。
动态规划  排列组合  递归  记忆化递归   从底向上


f[n][m] 表示将n个相同的小球放入到m个相同的盒子的所有放置方法
m > n: 盒子数目总是大于球数  f[n][m] = f[n][n]
m <= n: 盒子数小于球的数目    分为两种情况   1.每个盒子至少有一个球 f[n-m][m]  2.至少有一个盒子是空的 f[n][m-1]
f[n][m] = f[n-m][m] + f[n][m-1]
边界 f[n][1]=f[1][m]=f[0][m]=1

*/


int f(int n, int m) {
  if (n==1 || n==0 || m==1) return 1;
  else if (n < m) {
    return f(n, n);
  } else {
    return f(n-m, m) + f(n, m-1);
  }
}


int main() {
  int n=7,m=3;
  cout << f(n,m) << endl;
  return 0;
}
/*
 * @Description: 计算举证两条对角线元素之和
 * @Language: 
 * @Author: 
 * @Date: 2020-11-06 23:01:06
 */
#include <bits/stdc++.h>
using namespace std;


void sum(int a[3][3], int row, int col) {
  int x = 0;
  int y = 0;
  for (int i=0; i<row; ++i) x += a[i][i];
  for (int i=0; i<row; ++i) {
    for (int j=0; j<col; ++j) {
      if (i+j==row-1) {
        y += a[i][j];
      }
    }
  }

  cout << "x=" << x << endl;
  cout << "y=" << y << endl;
}


int main() {
  int a[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  sum(a, 3, 3);
  return 0;
}

/*
 * @Description: 输入年月日，计算改天是那年的第几天
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-11-06 20:59:53
 */
#include <bits/stdc++.h>
using namespace std;


int month[2][13] = {
  {0,31,28,31,30,31,30,31,31,30,31,30,31},
  {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

// 判断是否为闰年
bool isLeapYear(int yy) {
  return ((yy%4==0 && yy%100!=0) || (yy%400==0));
}

int check(int yy, int mm, int dd) {
  int res = 0;
  for (int i=1; i<mm; ++i) {
    res += month[isLeapYear(yy)][i];
  }
  res += dd;
  return res;
}

int main() {
  int yy,mm,dd;
  cin >> yy >> mm >> dd;
  cout << check(yy, mm, dd) << endl;
  return 0;
}
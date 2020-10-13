/*
 * @Description: 给定某年某月某日 求是该年的第几天
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-13 11:13:37
 */
#include <bits/stdc++.h>
using namespace std;

int days[2][13] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};

bool isLeapYear(int year) {
  return ((year%400==0) || ((year%4==0) && (year%100!=0)));
}

void judge(int year, int month, int day) {
  int ans = 0;
  for (int i=1; i<month; ++i) {
    ans += days[isLeapYear(year)][i];
  }
  ans += day;
  cout << "是第" << ans << "天" << endl;
}


int main() {
  int year, month, day;
  cin >> year >> month >> day;
  judge(year, month, day);
  return 0;
}
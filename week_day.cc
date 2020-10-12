/*
 * @Description: 某年某月某日是星期几 假设那年1月1日是星期一
 * @Language: C++
 * @Author: lexingsen 
 * @Date: 2020-10-11 23:32:07
 */
#include <bits/stdc++.h>

using namespace std;
unordered_map<int, string> mp {
  {0, "星期日"},
  {1, "星期一"},
  {2, "星期二"},
  {3, "星期三"},
  {4, "星期四"},
  {5, "星期五"},
  {6, "星期六"},
};

int days[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};


bool isLeapYear(int year) {
  return ((year%400==0) || (year%4==0&&year%100!=0));
}


void judge(int year, int month, int day) {
  int ans = 0;
  for (int i=0; i<month; ++i) {
    ans += days[isLeapYear(year)][i];
  }
  ans += day;
  cout << "第" << ans << "天" << endl;
}




int main() {
  cout << "请输入年月日:"<<endl;
  int year, month, day;
  cin >> year >> month >> day;
  judge(year, month, day);
  return 0;
}
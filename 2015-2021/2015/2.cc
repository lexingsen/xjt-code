/*
 * @Description: 统计数字字符 字母字符 其他字符出现的次数
 * @Language: 
 * @Author: 
 * @Date: 2020-11-06 23:01:06
 */
#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> mp;



int main() {
  string s;
  cin >> s;
  for (auto c:s) {
    if (isalpha(c)) {
      mp["char"] ++;
    } else if (isdigit(c)) {
      mp["digit"] ++;
    } else {
      mp["other"] ++;
    }
  }
  for (auto x:mp) {
    cout << x.first << ":" << x.second << endl;
  }
  return 0;
}
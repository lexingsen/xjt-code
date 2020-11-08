/*
 * @Description: 去掉字符串中所有的数字字符
 * @Language: 
 * @Author: 
 * @Date: 2020-11-06 23:35:15
 */
#include <bits/stdc++.h>
using namespace std;


const int N=128;

int main() {
  char s[N];
  gets(s);
  int n = strlen(s);
  int k=0;
  for (int i=0; i<n; ++i) {
    if (!isdigit(s[i])) s[k++] = s[i];
  }
  s[k] = '\0';
  cout << s << endl;

  return 0;
}
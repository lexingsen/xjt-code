/*
 * @Description: 复制文件，复制时把大写改为小写
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-10-13 11:48:13
 */
#include <bits/stdc++.h>
using namespace std;


int main() {
  FILE *f1 = fopen(".\\source.txt", "r");
  if (!f1) {
    cout << "can not open file1" << endl;
    exit(0);
  }
  FILE *f2 = fopen(".\\target.txt", "w");
  if (!f2) {
    cout << "can not open file2" << endl;
    exit(0);
  }
  char ch = fgetc(f1);
  while (ch != EOF) {
    if (ch >= 'A' && ch <= 'Z') ch += 32;
    fputc(ch, f2);
    ch = fgetc(f1);
  }
  fclose(f1);
  fclose(f2);
  cout << "copy finish" << endl;

  return 0;
}

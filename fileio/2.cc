/*
 * @Description: 写一个比较两个文件的程序，打印出两个文件首次不同的行和字符的位置
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-10-13 12:39:49
 */
#include <bits/stdc++.h>
using namespace std;


int cmp(const string &a, const string &b) {
  for(int i=1;;i++) {
    if (a[i-1] == '\0' && b[i-1] == '\0') {
      return 0;
    }
    if (a[i-1] == '\0' || b[i-1] == '\0' || a[i-1]!=b[i-1]) {
      return i;
    }
  }
}

int main() {
  FILE *f1 = fopen(".\\source.txt", "r");
  if (!f1) {
    cout << "can not open file1" << endl;
    exit(0);
  }
  FILE *f2 = fopen(".\\target.txt", "r");
  if (!f2) {
    cout << "can not open file2" << endl;
    exit(0);
  }

  string a,b;
  
  int row = 0;
  int col = 0;
  while (!feof(f1) && !feof(f2)) {
    fscanf(f1, "%s", a.c_str());
    fscanf(f2, "%s", b.c_str());
    col = cmp(a,b);
    row ++;
    if (col != 0) break;
    
  }

  cout << "col:" << col << ",row:" << row << endl;

  fclose(f1);
  fclose(f2);
  return 0;
}
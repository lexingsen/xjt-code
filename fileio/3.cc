/*
 * @Description: 有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排序）,输出到一个新文件C中
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 00:57:08
 */
#include <bits/stdc++.h>
using namespace std;

/*
int fclose(FILE *stream);
int feof(FILE *stream);
int fflush(FILE *stream);
int fgetc(FILE *stream);
int fputc(int c, FILE *stream);
char *fgets(char *s, int size, FILE *stream);
int fputs(const char *s, FILE *stream);
FILE *fopen(const char *path, const char *mode);
*/

const int N=1000;
char s[N];

void bubbleSort(char *s, int n) {
  bool flag=false;
  int i,j;
  for (i=0; i<n-1; ++i) {
    flag = false;
    for (j=0; j<n-1-i; ++j) {
      if (s[j] > s[j+1]) {
        flag = true;
        swap(s[j], s[j+1]);
      }
    }
    if (!flag) break;
  }
}

int main() {
  FILE *fa = fopen(".\\a.txt", "r");
  FILE *fb = fopen(".\\b.txt", "r");
  FILE *fc = fopen(".\\c.txt", "w");
  if (!fa || !fb || !fc) {
    exit(0);
  }

  int i = 0;
  char ch = fgetc(fa);
  while (ch != EOF && ch != '\n') {
    if (i >= N) break;
    s[i ++] = ch;
    ch = fgetc(fa);
  }
  ch = fgetc(fb);
  while (ch != EOF && ch != '\n') {
    if (i >= N) break;
    s[i ++] = ch;
    ch = fgetc(fb);
  }
  s[i] = '\0';
  int cnt = i-1;// 总的字符数

  bubbleSort(s, strlen(s));
  cout << "s:" << s << endl;
  for (int i=0; i<strlen(s); ++i) {
    fputc(s[i], fc);
  }

  fclose(fa);
  fclose(fb);
  fclose(fc);

  
  return 0;
}
#include <iostream>
using namespace std;

int getCnt(int x) {
  int cnt = 0;
  while (x) {
    cnt ++;
    x /= 10;
  }
  return cnt;
}


void dfs(int x) {
  cout << x%10;
  if (x/10)
  dfs(x/10);
}


int main() {
  cout << "请输入一个不多于五位的正整数:" << endl;
  int x;
  while (1) {
    cin >> x;
    if (x > 0 && x <= 99999) break;
    else {
      cout << "输入的数字不正确，请重新输入:" << endl;
      continue;
    }
  }
  int cnt = getCnt(x);
  cout << x << "的位数是" << cnt << endl;

  int ge = x%10;
  int shi = x/10%10;
  int bai = x/100%10;
  int qian = x/1000%10;
  int wan = x/10000;
  cout << "个位 = " << ge << endl;
  cout << "十位 = " << shi << endl;
  cout << "百位 = " << bai << endl;
  cout << "千位 = " << qian << endl;
  cout << "万位 = " << wan << endl;

  cout << "逆序输出:";
	dfs(x); 
  
  return 0;
}
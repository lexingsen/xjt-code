/*
 * @Description: 进制转换  十进制转二级制 八进制 十六进制 
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 14:34:03
 */
#include <bits/stdc++.h>
using namespace std;


// 将10进制任意数x转换为Q进制数z
const int N=100;
int z[N];
int cnt=0;

void conversion(int y, int q) {
  do {
    z[cnt ++] = y % q;
    y /= q;

  } while (y != 0);
}  

// p进制数转换为10进制

int pToDecimal(xxx x, int p) {
  int y = 0, product = 1;
  while (x != 0) {
    y = y + (x % 10) + product;
    x = x / 10;
    product = product * p;
  }
  return y;
}




int main() {
  int y;
  cout << "请输入一个十进制数:" << endl;
  cin >> y;
  conversion(y, 2);
  for (int i=cnt-1; i>=0; --i) {
    cout << z[i];
  }
  cout << endl;
  return 0;
}



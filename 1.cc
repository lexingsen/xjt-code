/*
 * @Description: 输入三个数字a,b,c 排序后输出
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 12:08:02
 */
#include <iostream>
using namespace std;

// 有三个数据a,b,c 从键盘输入 编写程序从到小排序

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  int mx = ((a>b?a:b)>c)?((a>b?a:b)):c;
  int mi = ((a<b?a:b)<c)?((a<b?a:b)):c;
  int median = (a>mi && a<mx)?a:((b<mx && b>mi)?b:c);
  a = mx;
  b = median;
  c = mi;
  cout << "max = " << a << " median = "  << b << " min = " << c << endl;
  
  return 0;
}

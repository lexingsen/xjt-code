/*
 * @Description: 素数筛选法
 * @Language: C++
 * @Author: lexingsne
 * @Date: 2020-10-14 12:35:56
 */
#include <bits/stdc++.h>
using namespace std;



// O(n^0.5)
bool isPrime(int n) {
  for (int i=2; i*i<=n; ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

const int N=100;
int prime[N];
int cnt = 0;
bool p[N]={false};

void findPrime() {
  for (int i=2; i<N; ++i) {
    if (p[i] == false) {
      // p[i] == false 代表i是一个素数 筛去i的倍数
      prime[cnt ++] = i;
      for (int j=i+i; j<N; j+=i) p[j] = true;//标记i的倍数j不是素数
    }
  }
}

int main() {
  findPrime();
  for (int i=0; i<N; ++i) {
    if (prime[i]!=0) cout << prime[i] << " ";
  }
  cout << endl;
  return 0;
}











#include<iostream>

using namespace std;

int main() {
  int n;
  cout << "正の整数値の桁数を求めます。\n";
  cout << "正の整数値:"; cin >> n;
  int cnt = 1;
  while (n > 10) {
    n = n/10;  // n /= 10で良き
    cnt++;
  }
  cout << "その値は" << cnt << "桁です。" << endl;

}
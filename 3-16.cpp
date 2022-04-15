#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "整数値:"; cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (n%i == 0) {
      cout << i << endl;
      cnt++;
    } 
  }
  cout << "約数は" << cnt << "個です" << endl;
}
#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "nの値:"; cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    cout << i << "の２乗は" << i*i << endl;
  }
}
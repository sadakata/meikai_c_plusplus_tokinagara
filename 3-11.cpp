#include<iostream>

using namespace std;

int main() {
  int n;
  cout << "１からNまでの和を求めます" << endl;
  cout << "nの値:"; cin >> n;
  int sum = 0;
  for (int i = 0; i <= n; i++) { //0を足しても意味ないのでi=1で良い。
    sum += i;
  }

  cout << "1から" << n << "までの和は" << sum << "です" << endl;
}